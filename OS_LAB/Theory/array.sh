i=0
while [ $i -lt 5 ]
do
read a[$i]

i=`expr $i + 1`
done
echo ""
for (( i=0;i<5;i++))
do
echo ${a[$i]}
done

echo hi