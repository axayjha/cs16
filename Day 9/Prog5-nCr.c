/* Day 9
 * Question 5
 * Write a program to calculate nCr
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int fact(int);

 int main()
 {
 	int n, r, i;
 	printf("Enter n and r: ");
 	scanf("%d %d", &n,&r);
 	printf("%dC%d = %d\n",n,r, fact(n)/(fact(r)*fact(n-r)) );

 }

 int fact(int n)
 {
 	if(n==1) return 1;
 	else return n*fact(n-1);
 }

 /* Output
Enter n and r: 6 3
6C3 = 20
 */