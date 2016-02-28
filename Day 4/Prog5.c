/* Day 4
 * Question 5
 * Write a program to print the reverse of a number and check if its a palindrome
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int number, numberCopy, reverse=0;

 	printf("Enter a number: ");
 	scanf("%d", &number);

 	numberCopy = number; 
 	/*Saving the original number for later*/

 	while(number)
 	{
 		reverse = 10*reverse + number%10;
 		number = number/10;
 	}

 	printf("Reverse: %d\n", reverse);

 	if (reverse == numberCopy) printf("Its a palindrome\n");
 	else printf("Not a palindrome\n");
 	

 }


 /* Output

 Enter a number: 12345
 Reverse: 54321
 Not a palindrome

*/