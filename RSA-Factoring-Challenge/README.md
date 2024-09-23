ALX RSA
#!/usr/bin/env bash

check_factor()
{
if [ $# -lt 3 ]; then
args=("$@")
        num2=1
        for ((i=2; i<${#args[@]}; i++)); do
num2=$(echo "${args[i]} \* $num2" | bc)
done
else
num2=$3
fi

    num1=$2
    num=$(echo "$1" | tr ':' '=')

    # Swap num1 and num2 if num2 > num1
    if (( $(echo "$num2 > $num1" | bc) )); then
        temp=$num1
        num1=$num2
        num2=$temp
    fi

    echo "$num$num1*$num2"

}

if [ $# -ne 1 ]; then
echo 'Usage: rsa <file>'
exit 1
else
while read -r i; do
result=$(factor "$i")
check_factor $result
done < "$1"
fi
