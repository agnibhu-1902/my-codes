<?php
    function factorial($n)
    {
        if($n == 0)
            return 1;
        else
            return $n * factorial($n - 1);
    }
    for($i = 0; $i <= 10; $i++)
    {
        $res = factorial($i);
        echo nl2br("The factorial of $i is $res.\n");
    }
?>