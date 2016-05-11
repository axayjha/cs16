/* Day 13
 * Question 1d
 * Write a program to divide a number by other using command line arguement
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main(int argc, char *argv[])
 {
     printf("Quotient = %.2f\n", ((float)atoi(argv[1]) / atoi(argv[2])));
 }
 
 /*Output
 
 $ ./div.out 5 4  //assuming executable file name is "add.out"
 Quotient = 1.25
 
*/ 