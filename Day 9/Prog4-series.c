/* Day 9
 * Question 4
 * Write a program to find the sum of the following series:
 * 1/1! + 4/2! + 27/3! + ..... n terms 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <math.h>
 int fact(int);

 int main()
 {
 	int n, i; float sum=0; 	
 	printf("Enter the length of the series: ");
 	scanf("%d", &n);
 	for(i=1; i<=n; i++)
 		sum+= ((float)pow(i,i))/fact(i);

 	printf("Sum of the series: %.2f\n", sum);
 }

 int fact(int n)
 {
 	if(n==1) return 1;
 	else return n*fact(n-1);

 }