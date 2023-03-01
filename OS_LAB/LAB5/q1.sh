echo Enter input
read t
case $t in
[a-z]) echo lower alphabet;;
[A-Z]) echo Upper alphabet;;
[1-9]) echo Number;;
*) echo special character ;;
esac
