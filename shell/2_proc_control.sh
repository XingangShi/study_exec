#!/bin/sh

#condition syntax:
#
#if ... : then
#    ...
#elif ... : then
#    ...
#else
#    ...
#fi

#In most conditions, it can use  condition to do testing, 
#usually, using '[]' to expression condition testing. Notice 
#there must be one space after [ and another space bfore ].
#some testing instances is below :
#[ -f "somefile" ] : to decide if somefile is or not a file
#[ -x "/bin/ls" ]  : to decide bin/ls is or not existed and can be exec
#[ -n "$var" ]     : to decide $var wether has a vlaue
#[ "$a"="$b" ]     : to decide $a is or not equal to $b

if [ ${SHELL} = "/bin/bash" ] ; then
    echo "your login shell is the bash"
else
    echo "your login shell is bash ${SHELL}"
fi

echo "\n"
mailfolder=/var/spool/mail/james
[ -r "$mailfolder" ] || { echo "Can not read $mailfolder" ; exit 1; }
echo "$mailfolder has mail form : "
grep "^From " $mailfolder



