/* Day 2
 * Question 6
 * Write a program to print the digit at unit position
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int number;

 	printf("Enter a number: ");
 	scanf("%d", &number);

 	printf("Digit at unit postion of %d is %d\n", number, number%10);
 }


/* Output

Enter a number: 54
Digit at unit postion of 54 is 4

*/

