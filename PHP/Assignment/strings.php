<?php
    $str = $_POST["text"];
    $operation = $_POST["operation"];
    switch($operation)
    {
        case "len":
            $fin = strlen($str);
            break;
        case "rev":
            $fin = strrev($str);
            break;
        case "upr":
            $fin = strtoupper($str);
            break;
        case "lwr":
            $fin = strtolower($str);
            break;
    }
    echo "The value is $fin.";
?>