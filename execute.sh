#/bin/bash

read -p 'Enter a script to execute (stack, queue...): ' SCRIPT_FOLDER_NAME

case $SCRIPT_FOLDER_NAME in
  'stack')
    gcc ./$SCRIPT_FOLDER_NAME/main.c -o ./$SCRIPT_FOLDER_NAME/main
    ;;

  *)
    echo 'Script not found'
    ;;
esac
