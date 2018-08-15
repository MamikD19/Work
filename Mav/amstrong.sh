echo "Enter a number"
read a
b=$a
r=0
s=0
while [ $a -ne 0 ]
do
b=`expr $a % 10`
c=`expr $s + $r \* $r \* $r`
s=`expr $s + $c`
a=`expr $a / 10`
done
if [ $s -eq $bss ]
then
echo "amstrong"
else
echo "not amstrong"
fi

