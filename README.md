# CS16 
Codes for STCET 2nd Sem class assignments

The codes for each program done so far in computer lab and class tests in 2nd Sem CSE dept.


**run.sh** – a shell script to compile and run a c code in one go without having to type 
`gcc prog.c -o prog.out`
and `./prog.out` separately



Using run.sh
-------------------

First change the permissions to make the script executable

`user@terminal:~$ chmod 744 run.sh`

*You have to do the above step just once and need to redo only if you change directory. *
*run.sh file should be present in your working directory to work*

Then simply do this to compile and run a “program.c” in one go-

`user@terminal:~$ ./run.sh program.c`

Alternate way 1
---------------

Set the PATH variable using export command

`cp run.sh /home/user/Documents/run`

`export PATH=/home/user/Documents:"${PATH}"`


and then to compile and run, you just need to do: 

`user@terminal:~$ run program.c`



Alternate way 2
---------------

Download the stpath script from my shell script repo
https://github.com/axayjha/shellscripts/blob/master/stpath

Run

`user@terminal:~$ bash stpath stapth`


Go to the folder having run.sh
and do

`user@terminal:~$ stpath run.sh`

And you're done!



and then to compile and run, you just need to do: 

`user@terminal:~$ run.sh program.c`

You can also rename the file to be just `run` and do

`user@terminal:~$ run program.c`


```
{
Content needs update. You can contribute.
Rename to proper names as you take help from them
and email the files with proper names to me.
akshayjha@live.in
}

.
├── Day 1
│   ├── Prog1.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5.c
│   └── run.sh
├── Day 10
│   ├── Prog1-length_of_string.c
│   ├── Prog2 - to_lower_case.c
│   ├── Prog3 - appending_strings.c
│   ├── Prog4 - reverse_string.c
│   ├── Prog5 - extract_substring.c
│   ├── Prog6 - students_in_class.c
│   ├── Prog7 - sort_names.c
│   └── run.sh
├── Day 11
│   ├── Prog1-coordinates.c
│   ├── Prog2-complex.c
│   ├── Prog3-minOfArray.c
│   ├── Prog4-areaofcircle.c
│   ├── Prog5a-maxOfThree.c
│   ├── Prog5b-maxOfThree.c
│   └── run.sh
├── Day 12
│   ├── Prog1-time.c
│   └── Prog2-distance.c
├── Day 13
│   ├── Prog1a-CLAsum.c
│   ├── Prog1b-CLAdiff.c
│   ├── Prog1c-CLAprod.c
│   ├── Prog1d-CLAdiv.c
│   ├── Prog2-copytextfile.c
│   └── run.sh
├── Day 2
│   ├── Prog1.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5.c
│   ├── Prog6.c
│   ├── Prog7.c
│   ├── Prog8.c
│   └── run.sh
├── Day 3
│   ├── Prog1.c
│   ├── Prog2a.c
│   ├── Prog2b.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5.c
│   ├── Prog6a.c
│   ├── Prog6b.c
│   ├── Prog7a.c
│   ├── Prog7b.c
│   └── run.sh
├── Day 4
│   ├── Prog1a.c
│   ├── Prog1b.c
│   ├── Prog1c.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4a.c
│   ├── Prog4b.c
│   ├── Prog4c.c
│   ├── Prog5.c
│   ├── Prog6.c
│   ├── Prog7.c
│   └── run.sh
├── Day 5
│   ├── Prog1.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5a.c
│   ├── Prog5b.c
│   ├── Prog6.c
│   ├── Prog7.c
│   └── run.sh
├── Day 6
│   ├── Prog1a.c
│   ├── Prog1c.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5.c
│   ├── Prog6.c
│   ├── Prog7.c
│   └── run.sh
├── Day 7
│   ├── Prog1.c
│   ├── Prog2.c
│   ├── Prog3.c
│   ├── Prog4.c
│   ├── Prog5.c
│   └── run.sh
├── Day 8
│   ├── Prog1-MatrixAddition.c
│   ├── Prog2-MatrixMultiplication.c
│   ├── Prog3-MatrixTranspose.c
│   └── run.sh
├── Day 9
│   ├── Prog1-Maxoftwo.c
│   ├── Prog2-factorial.c
│   ├── Prog3a-Primeornot1.c
│   ├── Prog3b-Primeornot2.c
│   ├── Prog3c-Primeornot3.c
│   ├── Prog3d-Primeornot4.c
│   ├── Prog4-series.c
│   ├── Prog5-nCr.c
│   ├── Prog6-RecurMul.c
│   ├── Prog7-RecurGCD.c
│   └── run.sh
├── LICENSE
├── README.md
├── run.sh  --> updated!
└── Test
    ├── lcm2.c
    ├── lcm.c
    ├── PowerOfTwo.c
    ├── run.sh
    └── SumAndMean.c

14 directories, 108 files

```

