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
#include "php_qb.h"
#include "qb.h"

ZEND_DECLARE_MODULE_GLOBALS(qb)

/* True global resources - no need for thread safety here */

/* {{{ qb_functions[]
 *
 * Every user visible function must have an entry in qb_functions[].
 */
const zend_function_entry qb_functions[] = {
	PHP_FE(qb_compile,		NULL)
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
	"0.1", /* Replace with version number for your extension */
#endif
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_QB
ZEND_GET_MODULE(qb)
#endif

static ZEND_INI_MH(OnUpdatePath) {
	uint32_t i;
	if(new_value_length > 1) {
		int last_char = new_value[new_value_length - 1];
		if(last_char == '\\' || last_char == '/') {
			new_value_length--;
		}
	}
#ifdef ZEND_WIN32
	for(i = 0; i < new_value_length; i++) {
		if(new_value[i] == '/') {
			new_value[i] = '\\';
		}
	}
#endif
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

	STD_PHP_INI_BOOLEAN("qb.allow_bytecode_interpretation",	"1",	PHP_INI_ALL,	OnUpdateBool,	allow_bytecode_interpretation,	zend_qb_globals,	qb_globals)
	STD_PHP_INI_BOOLEAN("qb.allow_debugger_inspection",		"1",	PHP_INI_ALL,	OnUpdateBool,	allow_debugger_inspection,		zend_qb_globals,	qb_globals)
	STD_PHP_INI_BOOLEAN("qb.allow_debug_backtrace",			"0",	PHP_INI_ALL,	OnUpdateBool,	allow_debug_backtrace,			zend_qb_globals,	qb_globals)
    STD_PHP_INI_BOOLEAN("qb.debug_with_exact_type",			"0",	PHP_INI_ALL,	OnUpdateBool,	debug_with_exact_type,			zend_qb_globals,	qb_globals)

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

#ifdef VC6_MSVCRT
	if(qb_get_vc6_msvcrt_functions() != SUCCESS) {
		return FAILURE;
	}
#endif

	qb_initialize_compiler(TSRMLS_C);
	qb_initialize_interpreter(TSRMLS_C);

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

/* Remove if there's nothing to do at request start */
/* {{{ PHP_RINIT_FUNCTION
 */
PHP_RINIT_FUNCTION(qb)
{
	QB_G(current_filename) = NULL;
	QB_G(current_line_number) = 0;
	QB_G(build_context) = NULL;
	QB_G(interpreter_context) = NULL;
	zend_hash_init(&QB_G(function_table), 16, NULL, qb_function_dtor, 0);
	return SUCCESS;
}
/* }}} */

/* Remove if there's nothing to do at request end */
/* {{{ PHP_RSHUTDOWN_FUNCTION
 */
PHP_RSHUTDOWN_FUNCTION(qb)
{
	zend_hash_destroy(&QB_G(function_table));
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

	snprintf(buffer, sizeof(buffer), "%d.%d", (int) QB_MAJOR_VERSION, (int) QB_MINOR_VERSION);
	php_info_print_table_row(2, "Version", buffer);
	php_info_print_table_row(2, "Release Name", QB_FULL_RELEASE_NAME);

#if __SSE_4_2__
	php_info_print_table_row(2, "SSE version", "4.2");
#elif __SSE_4_1__
	php_info_print_table_row(2, "SSE version", "4.1");
#elif __SSE_3__
	php_info_print_table_row(2, "SSE version", "3");
#elif __SSE_2__
	php_info_print_table_row(2, "SSE version", "2");
#elif __SSE__
	php_info_print_table_row(2, "SSE version", "1");
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

	qb_compile(arg1, arg2 TSRMLS_CC);
	RETURN_TRUE;
}
/* }}} */

/* {{{ proto string qb_execute(string arg)
    */
PHP_FUNCTION(qb_execute)
{
	zend_function *zfunc = EG(current_execute_data)->function_state.function;
	zval ***args = emalloc(ZEND_NUM_ARGS() * sizeof(zval **));
	zval *this = EG(This);

	if (zend_get_parameters_array_ex(ZEND_NUM_ARGS(), args) == FAILURE) {
		return;
	}

	qb_execute(zfunc, this, return_value, args, ZEND_NUM_ARGS() TSRMLS_CC);
	efree(args);
}
/* }}} */
/* The previous line is meant for vim and emacs, so it can correctly fold and 
   unfold functions in source code. See the corresponding marks just before 
   function definition, where the functions purpose is also documented. Please 
   follow this convention for the convenience of others editing your code.
*/

ZEND_ATTRIBUTE_FORMAT(printf, 1, 2)
NO_RETURN void qb_abort(const char *format, ...) {
	TSRMLS_FETCH();
	const char *filename;
	uint32_t lineno;
	va_list args;

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
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */