<?php

class QBFaceForwardHandler extends QBSIMDHandler {

	public function getInputOperandCount() {
		return 2;
	}

	public function getHelperFunctions() {
		$cType = $this->getOperandCType(1);
		$type = $this->getOperandType(1);
		$functions = array(
			array(
				"void ZEND_FASTCALL qb_calculate_face_forward_2x_$type($cType *op1_start, $cType *op1_end, $cType *op2_start, $cType *op2_end, $cType *res_start, $cType *res_end) {",
					"$cType *__restrict res_ptr = res_start;",
					"$cType *__restrict op1_ptr = op1_start;",
					"$cType *__restrict op2_ptr = op2_start;",
					"for(;;) {",
						"$cType dot_product;",
						"qb_calculate_dot_product_2x_$type(op1_ptr, NULL, op2_ptr, NULL, &dot_product, NULL);",
						"if(dot_product > 0) {",
							"res_ptr[0] = op1_ptr[0];",
							"res_ptr[1] = op1_ptr[1];",
						"} else {",
							"res_ptr[0] = -op1_ptr[0];",
							"res_ptr[1] = -op1_ptr[1];",
						"}",
						"res_ptr += 2;",
						"if(res_ptr >= res_end) {",
							"break;",
						"}",
						"op1_ptr += 2;",
						"if(op1_ptr >= op1_end) {",
							"op1_ptr = op1_start;",
						"}",
						"op2_ptr += 2;",
						"if(op2_ptr >= op2_end) {",
							"op2_ptr = op2_start;",
						"}",						
					"}",
				"}",
			),
			array(
				"void ZEND_FASTCALL qb_calculate_face_forward_3x_$type($cType *op1_start, $cType *op1_end, $cType *op2_start, $cType *op2_end, $cType *res_start, $cType *res_end) {",
					"$cType *__restrict res_ptr = res_start;",
					"$cType *__restrict op1_ptr = op1_start;",
					"$cType *__restrict op2_ptr = op2_start;",
					"for(;;) {",
						"$cType dot_product;",
						"qb_calculate_dot_product_3x_$type(op1_ptr, NULL, op2_ptr, NULL, &dot_product, NULL);",
						"if(dot_product > 0) {",
							"res_ptr[0] = op1_ptr[0];",
							"res_ptr[1] = op1_ptr[1];",
							"res_ptr[2] = op1_ptr[2];",
						"} else {",
							"res_ptr[0] = -op1_ptr[0];",
							"res_ptr[1] = -op1_ptr[1];",
							"res_ptr[2] = -op1_ptr[2];",
						"}",
						"res_ptr += 3;",
						"if(res_ptr >= res_end) {",
							"break;",
						"}",
						"op1_ptr += 3;",
						"if(op1_ptr >= op1_end) {",
							"op1_ptr = op1_start;",
						"}",
						"op2_ptr += 3;",
						"if(op2_ptr >= op2_end) {",
							"op2_ptr = op2_start;",
						"}",						
					"}",
				"}",
			),
			array(
				"void ZEND_FASTCALL qb_calculate_face_forward_4x_$type($cType *op1_start, $cType *op1_end, $cType *op2_start, $cType *op2_end, $cType *res_start, $cType *res_end) {",
					"$cType *__restrict res_ptr = res_start;",
					"$cType *__restrict op1_ptr = op1_start;",
					"$cType *__restrict op2_ptr = op2_start;",
					"for(;;) {",
						"$cType dot_product;",
						"qb_calculate_dot_product_4x_$type(op1_ptr, NULL, op2_ptr, NULL, &dot_product, NULL);",
						"if(dot_product > 0) {",
							"res_ptr[0] = op1_ptr[0];",
							"res_ptr[1] = op1_ptr[1];",
							"res_ptr[2] = op1_ptr[2];",
							"res_ptr[3] = op1_ptr[3];",
						"} else {",
							"res_ptr[0] = -op1_ptr[0];",
							"res_ptr[1] = -op1_ptr[1];",
							"res_ptr[2] = -op1_ptr[2];",
							"res_ptr[3] = -op1_ptr[3];",
						"}",
						"res_ptr += 4;",
						"if(res_ptr >= res_end) {",
							"break;",
						"}",
						"op1_ptr += 4;",
						"if(op1_ptr >= op1_end) {",
							"op1_ptr = op1_start;",
						"}",
						"op2_ptr += 4;",
						"if(op2_ptr >= op2_end) {",
							"op2_ptr = op2_start;",
						"}",						
					"}",
				"}",
			),
			array(
				"void ZEND_FASTCALL qb_calculate_face_forward_$type($cType *op1_start, $cType *op1_end, $cType *op2_start, $cType *op2_end, uint32_t dim, $cType *res_start, $cType *res_end) {",
					"$cType *__restrict res_ptr = res_start;",
					"$cType *__restrict op1_ptr = op1_start;",
					"$cType *__restrict op2_ptr = op2_start;",
					"for(;;) {",
						"uint32_t i;",
						"$cType dot_product;",
						"qb_calculate_dot_product_$type(op1_ptr, NULL, op2_ptr, NULL, dim, &dot_product, NULL);",
						"if(dot_product > 0) {",
							"for(i = 0; i < dim; i++) {",
								"res_ptr[i] = op1_ptr[i];",
							"}",
						"} else {",
							"for(i = 0; i < dim; i++) {",
								"res_ptr[i] = -op1_ptr[i];",
							"}",
						"}",
						"res_ptr += dim;",
						"if(res_ptr >= res_end) {",
							"break;",
						"}",
						"op1_ptr += dim;",
						"if(op1_ptr >= op1_end) {",
							"op1_ptr = op1_start;",
						"}",
						"op2_ptr += dim;",
						"if(op2_ptr >= op2_end) {",
							"op2_ptr = op2_start;",
						"}",						
					"}",
				"}",
			),
		);
		return $functions;
	}
	
	public function getAction() {
		$type = $this->getOperandType(1);
		if($this->operandSize == "variable") {
			if($this->addressMode == "ARR") {
				return "qb_calculate_face_forward_$type(op1_ptr, op1_ptr + op1_count, op2_ptr, op2_ptr + op2_count, MATRIX2_ROWS, res_ptr, res_ptr + res_count);";
			} else {
				return "qb_calculate_face_forward_$type(op1_ptr, NULL, op2_ptr, NULL, MATRIX2_ROWS, res_ptr, NULL);";
			}
		} else {
			if($this->addressMode == "ARR") {
				return "qb_calculate_face_forward_{$this->operandSize}x_$type(op1_ptr, op1_ptr + op1_count, op2_ptr, op2_ptr + op2_count, res_ptr, res_ptr + res_count);";
			} else {
				return "qb_calculate_face_forward_{$this->operandSize}x_$type(op1_ptr, NULL, op2_ptr, NULL, res_ptr, NULL);";
			}
		}
	}
}

?>