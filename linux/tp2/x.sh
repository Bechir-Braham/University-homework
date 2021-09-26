echo "type the name of your user"
read name

a=$(grep $name /etc/passwd)
b=$(echo $a | cut -f 1 -d":")

function list() {
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
    if ! [[ $choice =~ $re ]]; then
        echo "error: Not a number"
        exit 1
    fi

    re='^[1-7]+$'
    if ! [[ $choice =~ $re ]]; then
        echo "number should be between 1 and 7"
        exit 1
    fi

}

if [ "$b" = "$name" ]; then
    read -p "choose what you want to do:
    1)print user info
    2)modify user info (requires root access)" mode

    if [[ $mode -eq 1 ]]; then
        list
        echo $(echo $a | cut -f $choice -d":")
    elif [[ $mode -eq 2 ]]; then
        list
        case $choice in
        1)
            read -p "type your new username: " tmp
            usermod -l $tmp $name
            ;;
        2)
            passwd $name
            ;;
        3)
            read -p "type your new uid: " tmp
            usermod -u $tmp $name
            ;;
        4)
            read -p "type your new gid: " tmp
            usermod -g $tmp $name
            ;;

        5)
            read -p "type your new GECOS: " tmp
            usermod -c $tmp $name
            ;;
        6)
            read -p "type your new home directory: " tmp
            usermod -d $tmp $name
            ;;
        7)
            read -p "type your new shell: " tmp
            usermod -s $tmp $name
            ;;

        *)
            echo "invalid choice"
            exit 1
            ;;

        esac

    else

        echo "invalid mode"
        exit 1
    fi

else

    echo "username does not exist"
fi
