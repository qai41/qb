<?php

class QBClampHandler extends QBHandler {

	public function getInputOperandCount() {
		return 3;
	}

	protected function getActionForUnitData() {
		$cType = $this->getOperandCType(3);
		$lines = array();
		$lines[] = "if(op1 < op2) {";
		$lines[] =		"res = op2;";
		$lines[] = "} else if(op1 > op3) {";
		$lines[] =		"res = op3;";
		$lines[] = "} else {";
		$lines[] = 		"res = op1;";
		$lines[] = "}";
		return $lines;;
	}
}

?>