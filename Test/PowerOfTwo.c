/* Test
 * Question 8
 * Write a program to test if a given number is a power of 2 (Without using math.h)
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
#include <stdbool.h>

/* better version

bool powerOfTwo(int n){ // constant time
	return ((n & (n-1)) == 0);
}

*/

// naive method	
int main()
{
	int i, num, result=1;
	bool powerOfTwo;

	printf("Enter a number: ");
	scanf("%d", &num);

	for(i=1; i< num/2; i++)
	{
		result = result*2;
		powerOfTwo=true;

		if (result == num){
			printf("%dth power of 2\n", i);
			break;
		}
		
		powerOfTwo=false;


	}
	if (powerOfTwo == false){
		printf("Not a power of 2\n");
	}
}



/* Output

Enter a number: 64
6th power of 2

*/
