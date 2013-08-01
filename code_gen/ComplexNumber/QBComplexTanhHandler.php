<?php

class QBComplexTanhHandler extends QBComplexNumberHandler {

	protected function getActionForUnitData() {
		$type = $this->getOperandType(2);
		$cType = $this->getOperandCType(2);
		$f = ($type == 'F32') ? 'f' : '';
		$lines = array();
		$lines[] = "$cType w = 1 / (cosh$f(2.0 * op1_ptr[0]) + cos$f(2.0 * op1_ptr[1]));";
		$lines[] = $lines[] = "$cType r = w * sinh$f(2.0 * op1_ptr[0]);";
		$lines[] = $lines[] = "$cType i = w * sin$f(2.0 * op1_ptr[1]);";
		$lines[] = "res_ptr[0] = r;";
		$lines[] = $lines[] = "res_ptr[1] = i;";
		return $lines;
	}
}

?>