/* Day 4
 * Question 7
 * Write a program to print the sum of the series:

   1 + 1/2 + 1/3 + 1/4 + ...... + 1/n

   where n is entered by the user

 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int n, counter;
 	float sum = 0;

 	printf("Enter the length of the series: ");
 	scanf("%d", &n);


 	for(counter = 1; counter <= n; counter++)	
 	{
 		sum += (1.0/counter);
 		printf("(1/%d) ", counter);
 		if (counter < n) printf("+ ");

 	}

 	printf("= %.4f\n", sum);	

 }


 /* Output 

 Enter the length of the series: 4
 (1/1) + (1/2) + (1/3) + (1/4) = 2.0833


 */