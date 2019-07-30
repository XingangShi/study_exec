#!/bin/sh

#When we define var in sh, there is no space in sides of =
a="hello word"
#Using $ before one var can obtain its value;
echo "A is :" $a

#Notice use ${var} and its position, you can append any after it
num=2 
echo "this is the ${num}nd"
#if we don't use ${}, there will be no output
echo "this is the $numnd"

#In sh prog, default assignment is string assgnment.
var=1
var=$var+1
echo "\n"$var
echo "\n"
#The output is 1+1, not what we wanted 2.
#If we want to output to be what we need, we can do like the following

#Notice let and [] can be used in bash, not sh
#var=1
#let "var+=1"
#var=1
#var=$[$var+1]
#echo $var
var=1
var=$(($var+1))
echo $var
var=1
var=`expr $var + 1`
echo $var

