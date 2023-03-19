i=0
echo Enter size of array
read n
while [ $i -lt $n ]
do
    read a[$i]
    i=`expr $i + 1`
done
min=${a[0]}
max=${a[0]}
for (( i=0; i<n; i++ ))
do

    if [ ${a[$i]} -lt $min ]
    then
        min=${a[$i]}
    fi
    if [ ${a[$i]} -gt $max ]
    then
        max=${a[$i]}
    fi

done
echo Minimum number $min
echo Maximum number $max
