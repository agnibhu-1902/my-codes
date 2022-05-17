<html>
	<head>
		<title>Calculator</title>
	</head>
	<body>
		<center>
			<h1>Calculator</h1>
			<form method="post" action="calculator.php">
				<label for="fv">First value : </label>
				<input type="number" id="fv" name="firstval"><br><br>
				<label for="sv">Second value : </label>
				<input type="number" id="sv" name="secondval"><br><br>
				<label for="operation">Select operation : </label>
				<select name="operation" id="operation">
					<option value="+">Addition</option>
					<option value="-">Subtraction</option>
					<option value="*">Multiplication</option>
					<option value="/">Division</option>
				</select>
				<br><br>
				<input type="submit" value="Calculate">	
			</form>
			<b>
			<?php
				if(isset($_POST["firstval"]) and isset($_POST["secondval"]) and isset($_POST["operation"]))
				{
					$a=$_POST["firstval"];
					$b=$_POST["secondval"];
					$operation=$_POST["operation"];
				}
				else
					$operation='';
				echo "Result : ";
				switch($operation)
				{
					case '+':
						echo $a+$b;
						break;
					case '-':
						echo $a-$b;
						break;
					case '*':
						echo $a*$b;
						break;
					case '/':
						echo $a/$b;
						break;
					default:
						echo "NIL";
				}
			?>
			</b>
		</center>
	</body>
</html>
