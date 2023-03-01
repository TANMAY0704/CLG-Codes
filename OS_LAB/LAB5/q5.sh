echo Enter a number
read a
fact=1
for i in {$a..1}
do
	fact=`expr $fact \* $i`
done
echo Factorial of $a is $fact

