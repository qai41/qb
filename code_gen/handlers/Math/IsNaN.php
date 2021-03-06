<?php

class IsNaN extends Handler {

	use MultipleAddressMode, UnaryOperator, FloatingPointOnly, Multithreaded;
	
	public function getOperandType($i) {
		return ($i == 2) ? "I32" : $this->operandType;
	}

	public function getHandlerFunctionType() {
		// work around multilevel macros
		return "extern";
	}

	protected function getActionOnUnitData() {
		return "res = zend_isnan(op1);";
	}
}

?>
