/* Day 3
 * Question 5
 * Write a program that accepts a number between 0 and 10 and prints
 * if the number is odd or even using switch case statements
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int main()
 {
 	int number;

 	printf("Enter a number between 1 and 10: ");
 	scanf("%d", &number);

 	if(number >= 0 && number <= 10)
 	{
 		if(number % 2 == 0)
 			printf("%d is an even number.\n", number);
 		else
 			printf("%d is an odd number.\n", number);
 	}

 	else
 		printf("%d is not between 1 and 10!\n", number );
 }

 /* Output

 Enter a number between 1 and 10: 5
 5 is an odd number.

*/