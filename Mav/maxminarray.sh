echo "Enter the no of element"
read a
max=0
min=0
echo "Enter the element of the array"
for ((i=0;i<$a;i++))
do
read arr[i]
done
max=${arr[0]}
min=${arr[0]}
for ((i=0;i<$a;i++))
do
if [ ${arr[i]} -gt $max ]
then
max=${arr[i]}
fi
if [ ${arr[i]} -lt $min ]
then
min=${arr[i]}
fi
done
echo "the maximaum is $max minimum is $min"
