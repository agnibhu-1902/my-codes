<?php
    function sum($val)
    {
        if($val == 0)
            return 0;
        else
            return $val + sum($val - 1);
    }
    $n = 5;
    echo "The sum is " . sum($n) . ".";
?>