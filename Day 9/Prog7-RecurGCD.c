/* Day 9
 * Question 7
 * Write a program to calculate GCD of two numbers using recursion
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int gcd(int, int);

 int main()
 {
 	int x,y;
 	printf("Enter two numbers: ");
 	scanf("%d %d", &x, &y);
 	printf("GCD = %d\n", gcd(x,y));
 }

 int gcd(int a, int b)
 {
 	if(a%b==0) return b;
 	else return gcd(b, a%b);
 }

 /* Output

 Enter two numbers: 14 21
 GCD = 7
 
 */