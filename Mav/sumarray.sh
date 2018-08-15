echo "Enter the value of n"
read n
s=0
a=1
echo "Enter the array element"
for ((i=0;i<$n;i++))
do
read a[i]
s=`expr $s + ${a[i]}`
done
a=`expr $s / $n`
echo "sum is $s average is $a"
