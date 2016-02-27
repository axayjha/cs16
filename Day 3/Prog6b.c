/* Day 3
 * Question 6 (b)
 * Write a program to read a character in lower case and print it in upper case
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	char letter;

 	printf("Enter a lower case letter: ");
 	scanf("%c", &letter);

 	if(letter >= 97 && letter <= 122)
 		printf("Upper case: %c \n", letter-32);
 	else
 		printf("Input is not an lower case letter\n");
 }

/* Output

 Enter a lower case letter: z
 Upper case: Z 

 */