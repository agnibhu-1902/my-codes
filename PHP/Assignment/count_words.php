<?php
    function countWords($str)
    {
        $count = array(); $word = ''; $str = $str.' ';
        for($i = 0; $i < strlen($str); $i++)
        {
            if($str[$i] != ' ')
                $word = $word.$str[$i];
            else
            {
                $word = strtolower($word);
                if(array_key_exists($word, $count))
                    $count[$word] += 1;
                else
                    $count[$word] = 1;
                $word = '';
            }
        }
        foreach($count as $word=>$frequency)
        {
            echo $word." occurs ".$frequency;
            if($frequency == 1)
                echo nl2br(" time.\n");
            else
                echo nl2br(" times.\n");
        }
    }
    $string = "Train Bus Bus Train Taxi Aeroplane Taxi Bus";
    echo nl2br("Input : $string\n\n");
    countWords($string);
?>