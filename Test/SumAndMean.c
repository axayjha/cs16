/* Test
 * Question 6
 * Write a program to read the numbers until -1 is encountered. Also calculate the sum and mean of all positive 
 * numbers entered and the sum and mean of all the negative numbers entered seperately.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

int main()
{
	int i, number, negSum=0, negCount=0, posSum=0, posCount=0;

	printf("Enter numbers: \n");
	while(scanf("%d", &number)!=0 && number != -1)
	{
		if (number >= 0) { posSum += number; posCount++; }
		else { negSum += number; negCount++; }
	}

	printf("\nSum of all +ve numbers: %d \nMean of all +ve numbers: %.2f\n", posSum, ((float)posSum)/posCount );
	printf("\nSum of all -ve numbers: %d \nMean of all -ve numbers: %.2f\n", negSum, ((float)negSum)/negCount );
} 

/* Output

Enter numbers: 
4
5
-4
-5
6
-6
-1

Sum of all +ve numbers: 15 
Mean of all +ve numbers: 5.00

Sum of all -ve numbers: -15 
Mean of all -ve numbers: -5.00

*/