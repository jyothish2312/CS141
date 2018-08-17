#!/bin/bash
echo "hi there! may i know your good name? :)"
read NAME
echo "$NAME... oh! thats a fantastic name... tailor made for a fantastic person like you...:)"
echo "there you go dear $NAME...i'll make you your very own files directory"
mkdir $NAME
cd $NAME
for x in 1 2 3 4 5 6 7 8 9 10
do 
touch $NAME$x.cpp
done
