echo "Enter the value of n"
read n
t=0
echo "Enter the array element"
for ((i=0;i<$n;i++))
do
read arr[i]
done
for ((i=0;i<n;i++))
do
for ((j=i+1;j<n;j++))
do
if [ ${arr[i]} -gt ${arr[j]} ]
then

t=${arr[i]}
arr[i]=${arr[j]}
arr[j]=$t
fi
done
done
echo ${arr[*]}
