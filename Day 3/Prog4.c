/* Day 3
 * Question 4
 * Write a program to find the greatest among three numbers using logical AND (&&)
 * and ternary operator
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

 int main()
 {
 	float num1, num2, num3, greatest;

 	printf("Enter three numbers: ");
 	scanf("%f %f %f", &num1, &num2, &num3);

 	num1>num2 ? (num1>num3 ? (greatest = num1) : (greatest = num3)) : (num2 > num3 ? (greatest = num2) : (greatest = num3)) ;

 	printf("Greatest of %.2f, %.2f and %.2f = %.2f\n", num1, num2, num3, greatest);


 }

 /* Output

 Enter three numbers: 3
 4
 5
 Greatest of 3.00, 4.00 and 5.00 = 5.00

*/