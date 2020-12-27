#/bin/bash

read -p "Enter a script to execute (array, stack, queue...): " SCRIPT_FOLDER_NAME

if
    [ $SCRIPT_FOLDER_NAME == "array" ] ||
    [ $SCRIPT_FOLDER_NAME == "linked_list" ];
then
    gcc -o ./$SCRIPT_FOLDER_NAME/main ./$SCRIPT_FOLDER_NAME/main.c && ./$SCRIPT_FOLDER_NAME/main
else
    echo "Script not found"
fi
