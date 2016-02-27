/* Day 3
 * Question 6 (a)
 * Write a program to read a character in upper case and print it in lower case
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	char letter;

 	printf("Enter an upper case letter: ");
 	scanf("%c", &letter);

 	if(letter >= 65 && letter <= 90)
 		printf("Lower case: %c \n", letter+32);
 	else
 		printf("Input is not an upper case letter\n");
 }

/* Output

 Enter an upper case letter: A
 Lower case: a 

 */