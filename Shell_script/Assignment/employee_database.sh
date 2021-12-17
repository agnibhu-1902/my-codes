#!/bin/bash
#12. Write a shell script for menu based system to insert records for employees with an employee ID, name, designation, salary in a data file, also display records when necessary. Display salary for the employee asked.
if [ ! -s data.txt ]
then
	echo "Employee ID|Name|Designation|Salary" >> data.txt
fi
while [ true ]
do
	echo "===== MENU ====="
	echo "1. Insert"
	echo "2. Display records"
	echo "3. Display salary"
	echo "4. Exit"
	echo "Enter choice"
	read ch
	case $ch in
		1)
			echo "Enter employee ID"
			read id
			echo "Enter employee name"
			read name
			echo "Enter designation"
			read des
			echo "Enter salary"
			read sal
			echo "$id|$name|$des|$sal" >> data.txt
			echo "Record added : $id|$name|$des|$sal";;
		2)
			cat data.txt;;
		3)
			echo "Enter employee ID"
			read eid
			total=`cat data.txt | wc -l`
			flag=0
			for ((i=2;i<=total;i++))
			do
				record=`cat data.txt | head -$i | tail -1`
				match=`echo $record | grep -wci $eid`
				if [ $match -eq 1 ]
				then
					emp_name=`echo $record | cut -d "|" -f2`
					emp_sal=`echo $record | cut -d "|" -f4`
					echo "Salary of $emp_name : Rs.$emp_sal"
					flag=1
					break
				fi
			done
			if [ $flag -eq 0 ]
			then
				echo "No records found"
			fi;;
		4)
			echo "Program terminated"
			exit;;
		*)
			echo "Invalid choice"
	esac
done
