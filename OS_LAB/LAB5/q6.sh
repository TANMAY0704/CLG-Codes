echo enter a number
read a
sum=0
r=0
while [ $a -gt 0 ]
do
	r=`expr $a % 10`
	sum=`expr $sum + $r`
	a=`expr $a / 10` 
done
echo Sum of digits is $sum
