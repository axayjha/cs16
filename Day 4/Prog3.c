/* Day 4
 * Question 3
 * Write a program to read characters until '*' is encountered.
 * Then print the number of upper case, lower case and digits entered by the user. 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	char ch;
 	int upper, lower, digit;
 	upper = lower = digit = 0;

 	printf("Enter characters: ");
 	while( (ch = getchar()) != '*')
 	{
 		if (ch >= 65 && ch <= 90) upper++;
 		else if (ch >= 97 && ch <= 122) lower ++;
 		else if ('9' - ch >= 0 && '9' - ch <= 9) digit++;
 	}

 	printf("\nUpper case: %d \nLower Case: %d \nDigits: %d \n", upper, lower, digit);
 }

 /* Output

 Enter characters: A
 k 
 s
 3
 2
 *

 Upper case: 1 
 Lower Case: 2 
 Digits: 2 

*