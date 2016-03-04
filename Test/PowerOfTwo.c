/* Test
 * Question 8
 * Write a program to test if a given number is a power of 2 (Without using math.h)
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0


int main()
{
	int i,powerOfTwo, num, result=1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for(i=1; i< num/2; i++)
	{
		result = result*2;
		powerOfTwo=TRUE;

		if (result == num){
			printf("%dth power of 2\n", i);
			break;
		}
		
		powerOfTwo=FALSE;


	}
	if (powerOfTwo == FALSE){
		printf("Not a power of 2\n");
	}
}

/* Output

Enter a number: 64
6th power of 2

*/