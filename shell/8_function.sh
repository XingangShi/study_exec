#!/bin/sh

#function in shell prog syntax:
#
#functionname()
#{
#  #inside the body $1 is the first argument given to the function
#  #$2 the second
#  body
#}

#you need to declare function in the begining of sh files

help()
{
cat << HELP
xtitlebar -- change the name of an xterm, gnome-terminal or kds konsole
USAGE   : xtitlebar [-h] "string_for_titlebar"
OPTIONS : -h help text
EXAMPLE : xtitlebar "cvs"
HELP
exit 0
}

#in case of error of if -h is givem we call the function help

[ -z "$1" ] && help
[ "$1" = "-h" ] && help
#send the escape sequence to change the xterm titelbar
echo -e "\033]0:$1\007"
#
