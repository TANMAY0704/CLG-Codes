echo Enter number
read a
i=2
while [ $i -lt $a ]
do
if [ `expr $a % $i` -eq 0 ]
then
echo Not prime
exit
fi
i=`expr $i + 1`
done
echo Prime


