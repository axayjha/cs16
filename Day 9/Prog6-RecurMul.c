/* Day 9
 * Question 6
 * Write a program to multiply two numbers using recursion
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
 int mul(int, int);

 int main()
 {
 	int x, y;
 	printf("Enter two numbers: ");
 	scanf("%d %d", &x, &y);
 	printf("Product = %d\n", mul(x,y));
 }

 int mul(int a, int b)
 {
 	if(b==1) return a;
 	else return a+mul(a,b-1);
 }

 /* Output

 Enter two numbers: 4 3
 Product = 12

*/