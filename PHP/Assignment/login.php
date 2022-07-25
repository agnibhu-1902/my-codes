<?php
    $id = $_POST["uid"];
    $pass = $_POST["pass"];
    if($id == "STUDENT" and $pass == "ASUTOSH123")
    {
        header("Location: welcome.html");
        exit();
    }
    else
    {
        header("Location: wrong_input.html");
        exit();
    }
?>