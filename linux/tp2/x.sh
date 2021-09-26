echo "type the name of your user"
read name

a=$(grep $name ./passwd)
b=$(echo $a | cut -f 1 -d":")



if [ "$b" = "$name" ]; then 
    echo "username \"$name\" exists "
    echo "type the number of your field: 
    1) Username
    2) Password (if encrypted only x will be shown)
    3) UID
    4) GID
    5) GESCOS
    6) Home directory
    7) shell pash"

    read choice

    re='^[0-9]+$'
    if ! [[ $choice =~ $re ]] ; then
       echo "error: Not a number" ; exit 1
    fi

    re='^[1-7]+$'
    if ! [[ $choice =~ $re ]] ; then
       echo "number should be between 1 and 7" ; exit 1
    fi

    echo $(echo $a | cut -f $choice -d":") 


else
        echo "username does not exist"
fi




