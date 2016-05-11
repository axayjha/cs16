/* Day 13
 * Question 1a
 * Write a program to find the sum of two numbers using command line arguement
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main(int argc, char *argv[])
 {
     printf("Sum = %d\n", (atoi(argv[1]) + atoi(argv[2])));
 }
 
 /*Output
 
 $ ./add.out 3 4  //assuming executable file name is "add.out"
 Sum = 7
 
*/ 