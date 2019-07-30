#!/bin/sh

ver="0.1"

help()
{
    cat << HELP
    b_rotatefile -- ratate the file name
    USAGE   : b_rotatefile [-h] filename
    OPTIONS : -h help text
    EXAMPLE : b_rotatefile out
              This will e.g rename out.2 to out.3, out.1 to out.2, out to out.1[BR]
              and create an empty out-file
              The max number is 10
    VERSION : $ver
HELP
    exit 0
}

error()
{
    echo "$1"
    exit 1
}

while [ -n "$1" ]; do
case $1 in
    -h) help; shift 1;;
    --) break;;
    -*) echo "error: no such option $1. -h for help"; exit 1;;
    *)  break;;
esac
done

if [ -z "$1" ]; then
    error "ERROR: you must specify a file, use -h for helpe"
fi

filen="$1"
for n in 9 8 7 6 5 4 3 2 1 ;do
    if [ -f "$filen.$n" ]; then
        p=`expr $n + 1`
        echo "my $filen.$n $filen.$p"
        mv $filen.$n $filen.$p
    fi
done

if [ -f "$filen" ]; then
    echo "mv $filen $filen.1"
    mv $filen $filen.1
fi

echo touch $filen
touch $filen


