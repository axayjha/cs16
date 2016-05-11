/* Day 13
 * Question 1b
 * Write a program to find the difference of two numbers using command line arguement
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main(int argc, char *argv[])
 {
     printf("Difference = %d\n", (atoi(argv[1]) - atoi(argv[2])));
 }
 
 /*Output
 
 $ ./sub.out 5 4  //assuming executable file name is "sub.out"
 Difference = 1
 
*/ 