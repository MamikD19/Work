c=0
echo "Enter the number of element of the array"
read n
echo "Ente the element of the array"
for ((i=0;i<$n;i++))
do
read arr[i]
done
echo "Enter the search element"
read s
for ((i=0;i<$n;i++))
do
if [ ${arr[i]} -eq $s ]
then
c=`expr $i + 1`
fi
done
echo "the element found in position $c"
