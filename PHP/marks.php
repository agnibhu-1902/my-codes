<?php
	$marks=$_POST["marks"];
	$btn=$_POST["btn"];
	if(isset($btn) && $btn=="full")
		echo "Final marks : ".($marks+5);
	else if(isset($btn) && $btn=="half")
		echo "Final marks : ".($marks-5);
	else
		echo "Final marks: $marks";
?>