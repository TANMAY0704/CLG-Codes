echo Enter a number
read a
sum=0
r=0
count=1
while [ $a -gt $count ]
do
	r=`expr $a % $count`
	if [ $r -eq 0 ]
	then
		sum=`expr $sum + $count`
	fi
	count=`expr $count + 1`
done
if [ $sum -eq $a ]
then
	echo $a is perfect number
else
	echo $a is not a perfect number
fi

