echo "enter a number whose factorial is needed"
read a
f=1
for ((i=1;i<=$a;i++))
do
f=`expr $f \* $i`
done
echo "factorial is $f"
