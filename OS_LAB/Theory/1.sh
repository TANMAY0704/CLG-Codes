echo Enter number:
read a
temp=$a
sum=0
r=0
while [ $temp -gt 0 ]
do
r=`expr $temp % 10`
sum=`expr $sum \* 10 + $r`
temp=`expr $temp / 10`
done
if [ $sum -eq $a ]
then
echo Palindrome
else
echo Not Palindrome
fi