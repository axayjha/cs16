/* Day 9
 * Question 3c
 * Write a program to check if a given number is a prime number or not
 * using function with no argument and return value
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 void isPrime(int);

 int main()
 {
 	int num;
 	printf("Enter a number: ");
 	scanf("%d", &num);
 	isPrime(num);
 }

 void isPrime(int x)
 {
 	int i, factors=0;
 	for(i=2; i<=x/2; i++)
 	{
 		if(x%i==0) factors++;
 	}
 	if(factors>0) printf("Composite number\n");
 	else printf("Prime number\n");
 }


 /* Output

 Enter a number: 23
 Prime number

*/