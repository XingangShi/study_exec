#!/bin/sh
#vim: set sw=4 ts4 et;

help()
{
    cat << HELP
    a_b2d -- convert binary to decimal

    USAGE   : a_b2d [-h] binarynum

    OPTIONS : -h help text

    EXAMPLE : a_b2d 111010
              will return 58
HELP
    exit 0
}

error()
{
    #print an error and exit
    echo "$1"
    exit 1
}

lastchar()
{
    #return the last charters of a string in $rval
    if [ -z "$1" ]; then
        #empty string
        rval=""
        return
    fi

    #wc puts some space behind the output this is why we need sed
    numofchar=`echo -n "$1" | sed 's/ //g' | wc -c`
    #now cut out the last char
    rval=`echo -n "$1" | cut -b $numofchar`
}

chop()
{
    if [ -z "$1" ]; then
        #empty string
        rval=""
        return
    fi

    numofchar=`echo -n "$1" | wc -c | sed 's/ //g'`
    if [ "$numofchar" = "1" ]; then
        rval=""
        return
    fi

    numofcharminus1=`expr $numofchar "-" 1`
    rval=`echo -n "$1" | cut -b 1-${numofcharminus1}`
}

while [ -n "$1" ]; do
case $1 in
    -h) help;shift;; #function help is called
    --) shift;break;; #end of options
    -*) error "error: no such optin $1. -h for help";;
    *)  break;
esac
done

#The main prog
sum=0
weight=1
[ -z "$1" ] && help
binnum="$1"
binnumorg="$1"

while [ -n "$binnum" ]; do
    lastchar "$binnum"
    if [ "$rval" = "1" ]; then
        sum=`expr "$weight" "+" "$sum"`
    fi

    chop "$binnum"
    binnum="$rval"
    weight=`expr "$weight" "*" 2`
done

echo "binary $binnumorg is decimal $sum"
#
