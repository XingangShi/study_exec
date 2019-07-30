#1.
#About shell programs debug, inserting echo statment is the most simply
#method. Because the shell programs need not compiler.
#But shell also has a really debug module, you can use the following cmd:
#
#sh -x strangesscript
#
#the above cmd, can exec the shell file, and outputs all of vars value.
#
#Shell also have a cmd to just check syatax. As following :
#
#sh -n your_script

#2.
#file status testing
#-d   directory
#-f   ordinary file
#-L   symbol link
#-r   can read
#-s   file size larger than zero, not null
#-w   can write
#-u   file has suid position setted
#-x   can be run

#3.
#testring num
#-eq
#-ne
#-gt
#-lt
#-le
#-ge

#4.
#expr syntax
#expr argument operator argument

#5.
#inc counter

#6.
#exit n

#7.
#Command line arguments are treated as special variables within the
#script, the reason I am calling them variables is because they can
#be changed with the shift command.
#The command line arguments are ernumerated in the following number
#$0, $1, ..., $9. $0 is special in that it corresponds to the name 
#of the script itself. $1 is the first argument, $2 is the second 
#argument and so on.

#8.
#$# represents the parameter count. Useful for controlling loop
#   constructs that need to process each parameter.
#$@ expands to all the parameters separated by spaces. Useful for
#   passing all the parameters to some other function or program.
#$- expands to the flags(options) the shell was invoked with. 
#   Useful for controlling program flow based on the flags set.
#$$ expands to the process id of the shell innovated to run the
#   script. Useful for creating unique temporary filenames relative
#   to this instantiation of the script.

