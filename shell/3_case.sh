#!/bin/sh

#case systax
#
#case ... in
#    ...) do something here
#esac

#file command can judge wath the file's type is
#echo "file 1_hello.sh"


ftype=`file "$1"` 
case "$ftype" in
    "$1: Zip archive"*)
        unzip "$1";;
    "$1: gzip compressed"*)
        gunzip "$1";;
    "$1: bzip2 compressed"*)
        bunzip2 "$1";;
    *)
        echo "File $1 can not be uncompressed with smartzip";;
esac


