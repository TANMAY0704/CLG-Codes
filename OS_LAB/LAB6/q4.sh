echo Enter size of first array
read n1
i=0
while [ $i -lt $n1 ]
do
	read a[$i]
    i=`expr $i + 1`
done

echo Enter size of second array
read n2
j=0
while [ $j -lt $n2 ]
do
	read a[$n2]
    j=`expr $j + 1`
done

# union of array
for (( i=0; i<n1; i++ ))
do
    for (( j=0; j<n2; j++ ))
    do
        if [ ${a[$i]} -eq ${a[$j]} ]
        then
            break
        fi
    done
    if [ $j -eq $n2 ]
    then
        a[$n2]=${a[$i]}
        n2=`expr $n2 + 1`
    fi
done
echo Union of array is
for (( i=0; i<n2; i++ ))
do
    echo ${a[$i]}

done

# intersection of array
for (( i=0; i<n1; i++ ))
do
    for (( j=0; j<n2; j++ ))
    do
        if [ ${a[$i]} -eq ${a[$j]} ]
        then
            b[$i]=${a[$i]}
        fi
    done

done
echo Intersection of array is
for v in ${b[@]}
do
    echo $v

done
