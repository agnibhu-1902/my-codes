<?php
	$age=$_POST["age"];
	if($age>=18)
		echo "You are an adult.";
	else
		echo "You are a child.";
?>