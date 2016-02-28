/* Day 5
 * Question 6
 * Write a program to calculate the GCD of the two numbers entered by the user
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int num1, num2, divisor, gcd;

 	printf("Enter two numbers: \n");
 	scanf("%d %d", &num1, &num2);

  	for(divisor = 1; divisor <= (num1<=num2 ? num1 : num2); divisor++)
  		if (num1%divisor == 0 && num2%divisor ==0)
  			gcd = divisor;

  	printf("GCD of %d and %d is %d\n", num1, num2, gcd);	


 }

 /* Output

 Enter two numbers: 
 10
 15
 GCD of 10 and 15 is 5

*/