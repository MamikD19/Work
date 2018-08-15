read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
echo "A is greater"
elif [ $b -gt $c ]
then
echo "B is greater"
else
echo "c is greater"
fi
