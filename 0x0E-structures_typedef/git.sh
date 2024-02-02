#!/usr/bin/env bash

#script to push things to repository

git add .
git commit -m "$1"
git push
