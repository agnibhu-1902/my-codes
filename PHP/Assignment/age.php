<?php
    function age($day, $month, $year)
    {
        $c_day = date("j");
        $c_month = date("n");
        $c_year = date("Y");
        $age = $c_year - $year;
        if($c_month < $month)
            $age--;
        else if($c_day < $day)
            $age--;
        echo "Your age is $age.";
    }
    $date = $_POST["dob"];
    $day = substr($date, 0, 2);
    $month = substr($date, 3, 2);
    $year = substr($date, 6);
    age($day, $month, $year);
?>