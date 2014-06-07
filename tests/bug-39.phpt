--TEST--
Bug #39
--SKIPIF--
<?php 
	if(version_compare(PHP_VERSION, '5.3') < 0) print 'skip feature not available';
?>
--FILE--
<?php

namespace ns;

class Test {

	/**
	 * @engine qb
	 */
	public function method() {
		echo sin(0), "\n";
	}
}

$obj = new Test;
$obj->method();

?>
--EXPECT--
0