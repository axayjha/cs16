/* Day 3
 * Question 1
 * Write a program to find the larger of the two numbers using if else statements
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

 int main()
 {
 	int num1, num2;

 	printf("Enter two numbers: ");
 	scanf("%d %d", &num1, &num2);

 	if (num1 > num2)
 		printf("%d is greater than %d\n", num1, num2);

 	else
 		printf("%d is greater than %d\n", num2, num1);
 }

 /* Output

 Enter two numbers: 45
 65
 65 is greater than 45

*/