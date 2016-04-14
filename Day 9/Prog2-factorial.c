/* Day 9
 * Question 2
 * Write a program to calculate factorial of a number using function
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
 int fact(int);

 int main()
 {
 	int num;
 	printf("Enter a number: ");
 	scanf("%d", &num);
 	printf("%d! = %d\n", num, fact(num));
 }

 int fact(int x)
 {
 	if(x==1) return 1;
 	else return x*fact(x-1);
 }

 /* Output

 Enter a number: 5
 5! = 120

*/