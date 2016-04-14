/* Day 9
 * Question 3b
 * Write a program to check if a given number is a prime number or not
 * using function with no argument but a return value
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int isPrime();
 int num;

 int main()
 {
 	
 	printf("Enter a number: ");
 	scanf("%d", &num);
 	if(isPrime())
 		printf("Prime number\n");
 	else printf("Composite number\n");
 }

 int isPrime()
 {
 	int i, factors=0;
 	for(i=2; i<=num/2; i++)
 	{
 		if(num%i==0) factors++;
 	}
 	if(factors>0) return 0;
 	else return 1;
 }


 /* Output

 Enter a number: 28
 Composite number

*/