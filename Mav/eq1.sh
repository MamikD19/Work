echo "Enter a numbeer"
read a
echo "Enter the power"
read b
f=1
for ((i=1;i<=$b;i++))
do
f=`expr $f \* $a`
done
echo "Result is $f"
