<?php
    function transpose(&$mat)
    {
        $n = count($mat);
        echo nl2br("For transposition :\n\nOriginal matrix :\n");
        for($i = 0; $i < $n; $i++)
        {
            for($j = 0; $j < $n; $j++)
                echo $mat[$i][$j]."\t";
            echo nl2br("\n");
        }
        for($i = 0; $i < $n; $i++)
        {
            for($j = 0; $j < $n; $j++)
            {
                $res[$i][$j] = $mat[$j][$i];
            }
        }
        echo nl2br("Matrix after transposition :\n");
        for($i = 0; $i < $n; $i++)
        {
            for($j = 0; $j < $n; $j++)
                echo $res[$i][$j]."\t";
            echo nl2br("\n");
        }
    }
    function multiply(&$mat1, &$mat2)
    {
        $n1 = count($mat1); $n2 = count($mat2);
        echo nl2br("\nFor Multiplication : \n\nOriginal matrix 1 :\n");
        for($i = 0; $i < $n1; $i++)
        {
            for($j = 0; $j < $n2; $j++)
                echo $mat1[$i][$j]."\t";
            echo nl2br("\n");
        }
        echo nl2br("Original matrix 2 :\n");
        for($i = 0; $i < $n1; $i++)
        {
            for($j = 0; $j < $n2; $j++)
                echo $mat2[$i][$j]."\t";
            echo nl2br("\n");
        }
        for($i = 0; $i < $n1; $i++)
        {
            for($j = 0; $j < $n2; $j++)
            {
                $res[$i][$j] = 0;
                for($k = 0; $k < $n2; $k++)
                    $res[$i][$j] += $mat1[$i][$k] * $mat2[$k][$j];
            }
        }
        echo nl2br("Matrix after multiplication :\n");
        for($i = 0; $i < $n1; $i++)
        {
            for($j = 0; $j < $n2; $j++)
                echo $res[$i][$j]."\t";
            echo nl2br("\n");
        }
    }
    $mat1 = array(array(1,4,3,2),array(5,1,9,6),array(7,8,3,9),array(0,2,4,7));
    transpose($mat1);
    $mat1 = array(array(1,1,1,1),array(2,2,2,2),array(3,3,3,3),array(4,4,4,4));
    $mat2 = array(array(1,1,1,1),array(2,2,2,2),array(3,3,3,3),array(4,4,4,4));
    multiply($mat1,$mat2);
?>