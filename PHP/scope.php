<?php
    $var = "HELLO";
    function foo()
    {
        global $var;
        echo "Variable in: $var";
    }
    foo();
    echo "<br>";
    echo "Variable out: $var";
?>