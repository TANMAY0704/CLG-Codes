echo Enter size of array
read n
i=0

while [ $i -lt $n ]
do
    read a[$i]
    i=`expr $i + 1`
done

j=`expr $n - 1`
i=0
while [ $i -lt $j ]
do
    temp=${a[$i]}
    a[$i]=${a[$j]}
    a[$j]=$temp
    i=`expr $i + 1`
    j=`expr $j - 1`
done

echo Reverse array is
for v in ${a[@]}
do
    echo $v
done
