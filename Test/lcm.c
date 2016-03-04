/* Test
 * Question 7
 * Write a program to find LCM of two positive integers entered by user
 * Version 1
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


#include <stdio.h>

int main()
{

	int n1, n2, factor=1, lcm=1;
	printf("Enter two numbers: \n");
	scanf("%d %d", &n1, &n2);
	
	while(factor <= (n1>n2?n1:n2))
	{
		
		if((n1%factor ==0) && (n2%factor==0)){
			n1=n1/factor;
			n2=n2/factor;
			lcm = lcm * factor;
			factor =1;
		}
		factor++;
	}

	lcm = lcm*n1*n2;

	printf("LCM = %d\n", lcm);

}

/* Output

Enter two numbers: 
14
21
LCM = 42

*/

