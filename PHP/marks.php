<!DOCTYPE html>
    <body>
        <form method="post" action="marks.php">
            Enter marks: <input type="number" name="num"><br>
            <input type="radio" value="full" id="full" name="attendance">
            <label for="full">100% attendance</label><br>
            <input type="radio" value="half" id="half" name="attendance">
            <label for="half"> 50% attendance</label><br>
            <input type="submit" value="submit">
        </form>
    </body>
</html>
<?php
$marks =$_POST["num"];
$operation =$_POST["attendance"];
if($operation=="full")
{
    $marks=$marks+5;
}
else
{
    $marks=$marks-5;
}
echo "final marks: $marks";
?>