#!/bin/bash
RED='\033[0;31m'
Green='\033[0;32m'

echo "select your number:
0) remove module
1) install module"

read choice
re='^[0-1]+$'
if ! [[ $choice =~ $re ]]; then
    echo "invalid choice"
    exit 1
fi

if [[ $choice -eq 0 ]]; then

    a=$(lsmod | awk '{print $1}' | tail -n +2)

    # print all
    i=0
    for line in $a; do
        echo "$i) $line"
        i=$(($i + 1))
    done

    #check it is a number
    re='^[0-9]+$'
    if ! [[ $choice =~ $re ]] ; then
       echo "error: Not a number" ; exit 1
    fi
    #check value
    read choice
    if ((!(choice >= 0 && choice < i))); then
        echo "invalid choice"
        exit 1
    fi

    choice=$(($choice +1))

    removed_mod="$(echo "$a" | sed "$choice""q;d")"

    if ! [[ -f removed_mods.csv ]]; then
        touch removed_mods.csv;
    fi

    echo $removed_mod >> removed_mods.csv
    modinfo "$removed_mod"
    rmmod "$removed_mod"
    retVal=$?
    if [[ retVal -eq 0 ]]; then
        echo -e "${GREEN}removal successful"
        exit 0;
    else
        echo -e "${RED}error occured"
        exit 1;
    fi


fi
if [[ $choice -eq 1 ]]; then
    
    lines="$(sort -u removed_mods.csv)"
    for line in $lines;do
        echo $line;
    done

    read -p "type your module's name: " name
    if grep -xq "$name" removed_mods.csv
    then
        sed -i "/$name/d" removed_mods.csv
    else
        echo "mod was not found in the list"
        exit 1;
    fi
    
    if [[ $name == "TP_LINUX_MOD" ]] ;then 
        insmod ./TP_LINUX_MOD.ko
        exit 0;
    fi

    dir="$(modinfo -n $name)"

    retVal=$?
    if [[ retVal -eq 0 ]]; then
        echo -e "installation successful"
    else
        echo -e "error occured"
        exit 1;
    fi

    insmod $dir

fi

#
#
#
#
#
#
#
#
#
