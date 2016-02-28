# CS16
Codes for STCET 2nd Sem class assignments

The codes for each program done so far in computer lab and class tests in 2nd Sem CSE dept.


run.sh – a shell script to compile and run a c code in one go without having to type 
gcc prog.c -o prog.out
and ./prog.out seperately


Using run.sh
-------------------

First change the permissions to make the script executable

user@terminal:~$ chmod 744 run.sh

*You have to do the above step just once and need to redo only if you change directory*
*run.sh file should be present in your working directory to work*

Then simply do this to compile and run a “program.c” in one go-

#user@terminal:~$ ./run.sh program.c#
