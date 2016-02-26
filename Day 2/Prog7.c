/* Day 2
 * Question 7
 * Write a program to swap two numbers using a temporary variable
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int num1, num2, temp;
 	num1 = 10;
 	num2 = 20;

 	printf("Initially: num1 = %d, num2 = %d\n", num1, num2 );

 	temp = num1;
 	num1 = num2;
 	num2 = temp;

 	printf("Finally: num1 = %d, num2 = %d\n", num1, num2 );

 }

 /* Output

 Initially: num1 = 10, num2 = 20
 Finally: num1 = 20, num2 = 10

*/