#!/bin/bash

# this simple script automates the git add, commit and push
# process. to use this, make it executable and move it to
# a folder in your path (run echo $PATH)
# i aliased this script to be auto so that i can call it fast

# add all files in the directory
git add .

# ask for commit message
read -p "enter your commit message: " message

# commit changes
git commit -m "$message"

# finally push the changes
git push
