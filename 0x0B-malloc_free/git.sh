#!/usr/bin/bash
#script to push code to repository

git add .
git commit -m "$1"  #use "" to show it takes in a string as the first argument
git push
