/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2012 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Chung Leong <cleong@cal.berkeley.edu>                        |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "zend_extensions.h"
#include "php_qb.h"
#include "qb.h"

ZEND_DECLARE_MODULE_GLOBALS(qb)

/* True global resources - no need for thread safety here */
int qb_user_opcode = 242;
int qb_reserved_offset = -1;

/* {{{ qb_functions[]
 *
 * Every user visible function must have an entry in qb_functions[].
 */
const zend_function_entry qb_functions[] = {
	PHP_FE(qb_compile,		NULL)
	PHP_FE(qb_extract,		NULL)
#ifdef PHP_FE_END
	PHP_FE_END	/* Must be the last line in qb_functions[] */
#else
	{NULL, NULL, NULL}
#endif
};
/* }}} */

/* {{{ qb_module_entry
 */
zend_module_entry qb_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
	STANDARD_MODULE_HEADER,
#endif
	"qb",
	qb_functions,
	PHP_MINIT(qb),
	PHP_MSHUTDOWN(qb),
	PHP_RINIT(qb),		/* Replace with NULL if there's nothing to do at request start */
	PHP_RSHUTDOWN(qb),	/* Replace with NULL if there's nothing to do at request end */
	PHP_MINFO(qb),
#if ZEND_MODULE_API_NO >= 20010901
	STRING(QB_MAJOR_VERSION) "." STRING(QB_MINOR_VERSION), /* Replace with version number for your extension */
#endif
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_QB
ZEND_GET_MODULE(qb)
#endif

static ZEND_INI_MH(OnUpdatePath) {
	if(new_value_length > 1) {
		uint32_t i = new_value_length - 1;
		int last_char = new_value[i];
		if(last_char == '\\' || last_char == '/') {
			new_value_length--;
		}
#ifdef ZEND_WIN32
		for(i = 0; i < new_value_length; i++) {
			if(new_value[i] == '/') {
				new_value[i] = '\\';
			}
		}
#endif
	}
	return OnUpdateString(entry, new_value, new_value_length, mh_arg1, mh_arg2, mh_arg3, stage TSRMLS_CC);
}

/* {{{ PHP_INI
 */
PHP_INI_BEGIN()
    STD_PHP_INI_BOOLEAN("qb.allow_native_compilation",		"0",	PHP_INI_SYSTEM,	OnUpdateBool,	allow_native_compilation,		zend_qb_globals,	qb_globals)
	STD_PHP_INI_BOOLEAN("qb.allow_memory_map",				"1",	PHP_INI_SYSTEM,	OnUpdateBool,	allow_memory_map,				zend_qb_globals,	qb_globals)

	STD_PHP_INI_ENTRY("qb.compiler_path",    				"",		PHP_INI_SYSTEM, OnUpdatePath,	compiler_path,    				zend_qb_globals,	qb_globals)
	STD_PHP_INI_ENTRY("qb.compiler_env_path",  				"",		PHP_INI_SYSTEM, OnUpdatePath,	compiler_env_path,  			zend_qb_globals,	qb_globals)
	STD_PHP_INI_ENTRY("qb.native_code_cache_path",  		"",		PHP_INI_SYSTEM, OnUpdatePath,	native_code_cache_path,			zend_qb_globals,	qb_globals)
	STD_PHP_INI_ENTRY("qb.execution_log_path",  			"",		PHP_INI_SYSTEM, OnUpdatePath,	execution_log_path,				zend_qb_globals,	qb_globals)

	STD_PHP_INI_BOOLEAN("qb.allow_bytecode_interpretation",	"1",	PHP_INI_ALL,	OnUpdateBool,	allow_bytecode_interpretation,	zend_qb_globals,	qb_globals)
	STD_PHP_INI_BOOLEAN("qb.allow_debugger_inspection",		"1",	PHP_INI_ALL,	OnUpdateBool,	allow_debugger_inspection,		zend_qb_globals,	qb_globals)
	STD_PHP_INI_BOOLEAN("qb.allow_debug_backtrace",			"0",	PHP_INI_ALL,	OnUpdateBool,	allow_debug_backtrace,			zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.debug_with_exact_type",			"0",	PHP_INI_ALL,	OnUpdateBool,	debug_with_exact_type,			zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.column_major_matrix",			"1",	PHP_INI_ALL,	OnUpdateBool,	column_major_matrix,			zend_qb_globals,	qb_globals)

	STD_PHP_INI_BOOLEAN("qb.compile_to_native",				"0",	PHP_INI_ALL,	OnUpdateBool,	compile_to_native,				zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.show_opcodes",					"0",	PHP_INI_ALL,	OnUpdateBool,	show_opcodes,					zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.show_native_source",			"0",	PHP_INI_ALL,	OnUpdateBool,	show_native_source,				zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.show_compiler_errors",			"0",	PHP_INI_ALL,	OnUpdateBool,	show_compiler_errors,			zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.show_zend_opcodes",				"0",	PHP_INI_ALL,	OnUpdateBool,	show_zend_opcodes,				zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.show_pbj_opcodes",				"0",	PHP_INI_ALL,	OnUpdateBool,	show_pbj_opcodes,				zend_qb_globals,	qb_globals)
PHP_INI_END()
/* }}} */

/* {{{ php_qb_init_globals
 */
static void php_qb_init_globals(zend_qb_globals *qb_globals)
{
}
/* }}} */


qb_build_context * qb_get_current_build(TSRMLS_D) {
	qb_build_context *cxt = QB_G(build_context);
	if(!cxt) {
		cxt = emalloc(sizeof(qb_build_context));
		qb_initialize_build_context(cxt TSRMLS_CC);
		QB_G(build_context) = cxt;
	}
	return cxt;
}

void qb_discard_current_build(TSRMLS_D) {
	qb_build_context *cxt = QB_G(build_context);
	qb_free_build_context(cxt);
	efree(cxt);
	QB_G(build_context) = NULL;
}

void qb_attach_compiled_function(qb_function *qfunc, zend_op_array *zop_array) {
	if(qb_reserved_offset != -1) {
		zop_array->reserved[qb_reserved_offset] = qfunc;
	}
}

qb_function * qb_get_compiled_function(zend_function *zfunc) {
	if(qb_reserved_offset != -1 && zfunc->type == ZEND_USER_FUNCTION) {
		return zfunc->op_array.reserved[qb_reserved_offset];
	}
	return NULL;
}

int qb_user_opcode_handler(ZEND_OPCODE_HANDLER_ARGS) {
	zend_op_array *op_array = EG(active_op_array);
	qb_function *qfunc = op_array->reserved[qb_reserved_offset];
	if(!qfunc) {
		qb_build_context *cxt = qb_get_current_build(TSRMLS_C);
		qb_build(cxt);
		qfunc = op_array->reserved[qb_reserved_offset];
		qb_discard_current_build(TSRMLS_C);
	}
	if(qfunc) {
		zval *this = EG(This);
		qb_execute(qfunc, this, NULL, 0, NULL TSRMLS_CC);
	}
	return ZEND_USER_OPCODE_RETURN;
}

void qb_zend_ext_op_array_ctor(zend_op_array *op_array) {
	TSRMLS_FETCH();
	const char *doc_comment = CG(doc_comment);
	uint32_t doc_comment_len = CG(doc_comment_len);
	zend_compiler_globals *cg = ((zend_compiler_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(compiler_globals_id)]);
	if(doc_comment && strstr(doc_comment, "@engine")) {
		qb_parser_context _parser_cxt, *parser_cxt = &_parser_cxt;
		qb_build_context *build_cxt = qb_get_current_build(TSRMLS_C);
		qb_function_declaration *func_decl;
		zend_class_entry *zend_class = CG(active_class_entry);
		const char *filename = CG(compiled_filename);
		uint32_t line_number = CG(zend_lineno);

		qb_initialize_parser_context(parser_cxt, build_cxt->pool, zend_class, filename, line_number TSRMLS_CC);
		func_decl = qb_parse_function_doc_comment(parser_cxt, doc_comment, doc_comment_len);
		if(func_decl) {
			// add QB instruction
			zend_op *qb_op = &op_array->opcodes[op_array->last++];
			qb_op->opcode = qb_user_opcode;
			Z_OPERAND_TYPE(qb_op->op1) = IS_UNUSED;
			Z_OPERAND_TYPE(qb_op->op2) = IS_UNUSED;
			Z_OPERAND_TYPE(qb_op->result) = IS_UNUSED;

			// add the declaration to the build
			qb_add_function_declaration(build_cxt, func_decl);

			// store the declaration in the reserved slot for the time being
			op_array->reserved[qb_reserved_offset] = func_decl;

			if(zend_class) {
				qb_class_declaration *class_decl = qb_get_class_declaration(build_cxt, zend_class);
				if(!class_decl) {
					class_decl = qb_parse_class_doc_comment(parser_cxt, zend_class);
				}
				func_decl->class_declaration = class_decl;
			}
		}
	}
}

void qb_zend_ext_op_array_handler(zend_op_array *op_array) {
	qb_function_declaration *func_decl = op_array->reserved[qb_reserved_offset];
	if(func_decl) {
		TSRMLS_FETCH();
		// set the pointer now--it's going to be different from the one we got in qb_zend_ext_op_array_ctor()
		func_decl->zend_op_array = op_array;

		// set slot to null again
		op_array->reserved[qb_reserved_offset] = NULL;
	}
}

void qb_zend_ext_op_array_dtor(zend_op_array *op_array) {
	TSRMLS_FETCH();
	qb_function *qfunc = op_array->reserved[qb_reserved_offset];
	if(qfunc) {
		qb_free_function(qfunc);
	}
}

zend_extension zend_extension_entry = {
	"qb",
	STRING(QB_MAJOR_VERSION) "." STRING(QB_MINOR_VERSION),
	"Chung Leong",
	"http://www.php-qb.net/",
	"Copyright (c) 2013-2014",
	NULL,
	NULL,
	NULL,           /* activate_func_t */
	NULL,           /* deactivate_func_t */
	NULL,           /* message_handler_func_t */
	qb_zend_ext_op_array_handler,           /* op_array_handler_func_t */
	NULL,			/* statement_handler_func_t */
	NULL,           /* fcall_begin_handler_func_t */
	NULL,           /* fcall_end_handler_func_t */
	qb_zend_ext_op_array_ctor,			/* op_array_ctor_func_t */
	qb_zend_ext_op_array_dtor,			/* op_array_dtor_func_t */
	STANDARD_ZEND_EXTENSION_PROPERTIES
};

int qb_install_user_opcode_handler() {
	if(zend_get_user_opcode_handler(qb_user_opcode)) {
		// choose a user opcode that isn't in use
		uint32_t i;
		for(i = 255; i >= 200; i--) {
			if(!zend_get_user_opcode_handler(i)) {
				qb_user_opcode = i;
				break;
			}
		}
	}

	// set the opcode handler
	if(zend_set_user_opcode_handler(qb_user_opcode, qb_user_opcode_handler) == FAILURE) {
		qb_user_opcode = 0;
		return FAILURE;
	}

	// get a reserved offset
	qb_reserved_offset = zend_get_resource_handle(&zend_extension_entry);
	if(qb_reserved_offset == -1) {
		return FAILURE;
	}

	// register extension
	zend_register_extension(&zend_extension_entry, NULL);
	return SUCCESS;
}

int qb_is_compiled_function(zend_function *zfunc) {
	return qb_get_compiled_function(zfunc) != NULL;
}

#if ZEND_ENGINE_2_1
int zend_startup_strtod(void);
int zend_shutdown_strtod(void);
#endif

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(qb)
{
	ZEND_INIT_MODULE_GLOBALS(qb, php_qb_init_globals, NULL);

	REGISTER_INI_ENTRIES();

	REGISTER_LONG_CONSTANT("QB_SCAN_FILE",			QB_SCAN_FILE,			CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("QB_SCAN_ALL",			QB_SCAN_ALL,			CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("QB_START_DEFERRAL",		QB_START_DEFERRAL,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("QB_END_DEFERRAL",		QB_END_DEFERRAL,		CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("QB_PBJ_DETAILS",		QB_PBJ_DETAILS,			CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("QB_PBJ_DECLARATION",	QB_PBJ_DECLARATION,		CONST_CS | CONST_PERSISTENT);

#ifdef VC6_MSVCRT
	if(qb_get_vc6_msvcrt_functions() != SUCCESS) {
		return FAILURE;
	}
#endif

	qb_install_user_opcode_handler();

#if ZEND_ENGINE_2_1
	zend_startup_strtod();
#endif
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(qb)
{
	UNREGISTER_INI_ENTRIES();

#if ZEND_ENGINE_2_1
	zend_shutdown_strtod();
#endif
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_RINIT_FUNCTION
 */
PHP_RINIT_FUNCTION(qb)
{
	uint32_t i;
	for(i = 0; i < sizeof(QB_G(static_zvals)) / sizeof(zval); i++) {
		zval *value = &QB_G(static_zvals)[i];
#if !ZEND_ENGINE_2_2 && !ZEND_ENGINE_2_1		
		value->refcount__gc = 1;
		value->is_ref__gc = 0;
#else
		value->refcount = 2;
		value->is_ref = 0;
#endif
		value->type = IS_STRING;
	}
	QB_G(static_zval_index) = 0;
	QB_G(current_filename) = NULL;
	QB_G(current_line_number) = 0;
	QB_G(build_context) = NULL;
	QB_G(interpreter_context) = NULL;

	QB_G(compiled_functions) = NULL;
	QB_G(compiled_function_count) = 0;
	QB_G(native_code_bundles) = NULL;
	QB_G(native_code_bundle_count) = 0;

	memset(&QB_G(thread_pool), 0, sizeof(qb_thread_pool));
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_RSHUTDOWN_FUNCTION
 */
PHP_RSHUTDOWN_FUNCTION(qb)
{
	uint32_t i;
	if(QB_G(compiled_functions)) {
		for(i = 0; i < QB_G(compiled_function_count); i++) {
			qb_function *qfunc = QB_G(compiled_functions)[i];
			qb_free_function(qfunc);
		}
		qb_destroy_array((void **) &QB_G(compiled_functions));
	}
#ifdef NATIVE_COMPILE_ENABLED
	if(QB_G(native_code_bundles)) {
		for(i = 0; i < QB_G(native_code_bundle_count); i++) {
			qb_native_code_bundle *bundle = &QB_G(native_code_bundles)[i];
			qb_free_native_code(bundle);
		}
		qb_destroy_array((void **) &QB_G(native_code_bundles));
	}
#endif
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(qb)
{
	char buffer[256];
	uint32_t i;
	qb_diagnostics diag;
	php_info_print_table_start();
	php_info_print_table_header(2, "qb support", "enabled");

	php_info_print_table_row(2, "Version", STRING(QB_MAJOR_VERSION) "." STRING(QB_MINOR_VERSION));
	php_info_print_table_row(2, "Release Name", QB_FULL_RELEASE_NAME);

#if __SSE4_2__
	php_info_print_table_row(2, "SSE version", "4.2");
#elif __SSE4_1__
	php_info_print_table_row(2, "SSE version", "4.1");
#elif __SSE3__
	php_info_print_table_row(2, "SSE version", "3");
#elif __SSE2__
	php_info_print_table_row(2, "SSE version", "2");
#elif __SSE__
	php_info_print_table_row(2, "SSE version", "1");
#endif

#if __AVX__
	php_info_print_table_row(2, "AVX version", "1");
#endif
#if __AVX2__
	php_info_print_table_row(2, "AVX version", "2");
#endif

	qb_run_diagnostics(&diag TSRMLS_CC);
	php_info_print_table_colspan_header(2, "Diagnostics");

	for(i = 1; i < QB_DIAGNOSTIC_SPEED_TEST_COUNTS; i++) {
		static const char *test_types[] = {
			NULL,
			"Integer addition throughput",
			"Integer multiplication throughput",
			"Integer division throughput",
			"Integer multiply-accumulate throughput",
			"Floating point addition throughput",
			"Floating point multiplication throughput",
			"Floating point division throughput",
			"Floating point multiply-accumulate throughput",
			"Vector addition throughput",
			"Vector multiplication throughput",
			"Vector division throughput",
			"Vector multiply-accumulate throughput",
		};
		snprintf(buffer, sizeof(buffer), "%g million operations per second", round(diag.instruction_speeds[i] / 1000000));
		php_info_print_table_row(2, test_types[i], buffer);
	}
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}
/* }}} */


/* Remove the following function when you have succesfully modified config.m4
   so that your module can be compiled into PHP, it exists only for testing
   purposes. */

/* Every user-visible function in PHP should document itself in the source */

/* {{{ proto bool qb_compile(callable name, string return_type, array variable_types [, integer options])
   Convert PHP instructions to qb instructions */
PHP_FUNCTION(qb_compile)
{
	zval *arg1 = NULL, *arg2 = NULL;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|zz", &arg1, &arg2) == FAILURE) {
		return;
	}

	RETURN_TRUE;
}
/* }}} */

/* {{{ proto bool qb_extract(callable name, integer output_type)
   Extract information from a given resource */
PHP_FUNCTION(qb_extract)
{
	zval *input = NULL;
	long output_type;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zl|", &input, &output_type) == FAILURE) {
		return;
	}

	//qb_extract(input, output_type, return_value TSRMLS_CC);
}
/* }}} */

ZEND_ATTRIBUTE_FORMAT(printf, 1, 2)
NO_RETURN void qb_abort(const char *format, ...) {
	const char *filename;
	uint32_t lineno;
	va_list args;
	TSRMLS_FETCH();

	if(QB_G(current_filename)) {
		filename = QB_G(current_filename);
	} else {
		filename = zend_get_executed_filename(TSRMLS_C);
	}
	if(QB_G(current_line_number)) {
		lineno = QB_G(current_line_number);
	} else {
		lineno = zend_get_executed_lineno(TSRMLS_C);
	}

	va_start(args, format);
	zend_error_cb(E_ERROR, filename, lineno, format, args);
	va_end(args);
#if __GNUC__
	// just to silence the warning--zend_error_cb() doesn't return
 	exit(0);
#endif
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
