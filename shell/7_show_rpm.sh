#!/bin/sh

#list a content summary of a number of RPM packages
#Usage : showrpm rpmfile1 rpmfile2 ...
#Exapmle: showrpm /cdrom/RedHat/RPMS/*.rpm

help()
{
if [ $# -lt 3 ] ; then
cat << HELP

USAGE   : showrpm rpmfile1 rpmfile2 ...
OPTIONS : -h help text
EXAMPLE : 7_show_rpm.sh /cdrom/RedHat/RPMS/*.rpm

HELP
exit 0
fi
}

for rpmpackage in $*; do
    if [ -r "$rpmpackage" ] ; then
        echo "========= rpmpackage ==============="
        rpm -qi -p $rpmpackage
    else
        echo "ERROR : cannot read file $rpmpackage"
    fi
done

