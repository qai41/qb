<?php

class QBBranchOnLessThanHandler extends QBBranchHandler {

	public function getInputOperandCount() {
		return 2;
	}

	protected function getActionForUnitData() {
		return "condition = (op1 < op2);";
	}
}

?>