<?php
    function rev($word)
    {
        $rword='';
        for($i = 0; $i < strlen($word); $i++)
            $rword = $word[$i] . $rword;
        return $rword;
    }
    $word = "agnibhu";
    echo "The reversed string is " . rev($word);
?>