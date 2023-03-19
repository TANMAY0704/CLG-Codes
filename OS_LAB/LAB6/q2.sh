i=0
echo Enter size of array
read n
while [ $i -lt $n ]
do
    read a[$i]
    i=`expr $i + 1`
done

count=0
for v in ${a[@]}
do 
    for (( j=0; j<n; j++ ))
    do 
    if [ $v -eq ${a[$i]} ]
    then
        count=`expr $count + 1`
    fi
    
done
echo $v is $count times in array
done