/* Day 5
 * Question 2
 * Write a program to calculate the value of x^n where c and n are entered by user
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int base, exponent, result = 1;

 	printf("Enter the base and exponent: \n");
 	scanf("%d %d", &base, &exponent);

 	while(exponent--) result *= base;
 	printf("Result = %d\n", result); 	 	 

 }

 /* Output

 Enter the base and exponent: 
 3
 4
 Result = 81
 
*/