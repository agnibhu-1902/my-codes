<?php
    $marks = $_POST["marks"];
    $attendance = $_POST["attendance"];
    if(isset($attendance))
    {
        if($attendance == "full")
            $marks += 5;
        else
            $marks -= 5;
    }
    echo "Final marks: $marks";
?>