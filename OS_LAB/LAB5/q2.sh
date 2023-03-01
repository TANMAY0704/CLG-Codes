echo Enter a number
read a
sum=0 
r=0
original=$a
while [ $a -gt 0 ]
do
	r=`expr $a % 10`
	sum=`expr $sum \* 10 + $r`
	a=`expr $a / 10`
done
if [ $sum -eq $original ]
then
	echo Palindrom
else
	echo Not Palindrom
fi
exit