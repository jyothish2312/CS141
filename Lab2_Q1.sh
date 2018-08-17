#!/bin/bash
echo "what's your name?"
read NAME
echo "you are $NAME"
echo "here you go...your very own directory is here...:)"
mkdir $NAME
cd $NAME
touch $NAME.cpp



