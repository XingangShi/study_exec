#!/bin/sh

#we have less than 3 args. print the help text
if [ $# -lt 3 ] ; then
cat << HELP

ren -- renames a number of files using sed regular expressions USAGG;
   ren 'regexp' 'replacement' files ...

EXAMPLE; rename all *.HTM files in *.html:
   ren 'HTM$' 'html' *.HTM

HELP
    exit 0
fi

OLD="$1"
NEW="$2"

shift
shift
for file in $* ; do
    if [ -f "$file" ]; then
        newfile=`echo "$file" | sed "s/${OLD}/${NEW}/g"
        if [ -f "$newfile"]; then
            echo "ERROR: $newfile exists already"
        else
            echo "rename $file to $newfile ..."
        fi
    fi
done
