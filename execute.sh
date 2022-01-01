#/bin/bash

read -p "Enter a script to execute (array, stack, linked_list...): " FOLDER_NAME

if [ "$FOLDER_NAME" = "array" ] || [ "$FOLDER_NAME" = "linked_list" ] || [ "$FOLDER_NAME" = "stack" ]; then
  gcc -o ./$FOLDER_NAME/main.o ./$FOLDER_NAME/main.c && ./$FOLDER_NAME/main.o
else
  echo "Data structure not found, try again"
fi
