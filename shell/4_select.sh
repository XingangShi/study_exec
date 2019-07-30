#!/bin/bash

#slect syntax
#slect var in ... ; do
#    break;
#done
#.... now $var can be used ....

echo "What is your favourite OS ? "
select var in "Linx" "Gnu Hurd" "Free BSD" "Other"; do
    break;
done

echo "You have selected $var"
