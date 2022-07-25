<?php
$str = "Lorem ipsum dolor sit amet";
$pos = strrpos($str, ' ') + 1;
echo "The length of the last word: " . strlen(substr($str, $pos));
?>