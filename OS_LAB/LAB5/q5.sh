echo Enter a number
read a

for (( i=1; i<=$a; i++ ))
do
	fact=`expr $fact \* $i`
done
echo Factorial of $a is $fact
