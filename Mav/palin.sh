echo "Enter a number"
read a
x=$a
c=0
while [ $a -ne 0 ]
do
b=`expr $a % 10`
c=`expr $c \* 10 + $b`
a=`expr $a / 10`
done
if [ $c -eq $x ]
then
echo "Palindrom"
else
echo "not Palindrome"
fi
