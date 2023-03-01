echo Enter a range 
read a b
for i in {$a..$b}
do
x=2
flag=0
while [ $x -le `expr $i / 2` ]
do
	if [ `expr $i % $x` -eq 0 ]
	then
		flag=1
	fi
	x=`expr $x + 1`
done
if [ $flag -eq  1 ]
then 
echo $i
fi
done

