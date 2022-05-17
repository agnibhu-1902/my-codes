<?php
	$string="HELLO";
	$i=0;
	$reverse='';
	while(!empty($string[$i]))
		$reverse=$string[$i++].$reverse;
	echo "Reversed string : $reverse";
?>