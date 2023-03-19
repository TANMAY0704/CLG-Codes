echo Enter size of array
read n
i=0
while [ $i -lt $n ]
do
	read a[$i]
	i=`expr $i + 1`
done

sum=0
for v in ${a[@]}
do
	sum=`expr $sum + $v`
done

echo $sum
