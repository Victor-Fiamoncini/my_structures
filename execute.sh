#/bin/bash

read -p "Enter a script to execute (array, stack, queue...): " FOLDER_NAME

if
    [ $FOLDER_NAME == "array" ] ||
    [ $FOLDER_NAME == "linked_list" ] ||
    [ $FOLDER_NAME == "array" ];
then
    gcc -o ./$FOLDER_NAME/main ./$FOLDER_NAME/main.c && ./$FOLDER_NAME/main
else
    echo "Script not found"
fi
