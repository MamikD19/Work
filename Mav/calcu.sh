echo "Enter the first number"
read a
echo "Enter the second number"
read b
echo "Enter 1 for adition"
echo "Enter 2 for subtraction"
echo "Enter 1 for division"
echo "Enter 1 for multiplication"
for ((;;))
do

echo "Enter a choice"
	read ch
		case $ch in
			1) 
				echo `expr $a + $b`
				;;
			2)
				echo `expr $a - $b`
				;;
			3)
				echo `expr $a / $b`
				;;

			4)
				echo `expr $a \* $b`
				;;
		 esac
done
		
