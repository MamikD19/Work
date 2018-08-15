read a
if [ `expr $a % 7` -eq 0 -a `expr $a % 10` -eq 0 ]
then
echo "A is divisible by 10 and 7"
else
echo "A is not divisible by 10 and 7"
fi
