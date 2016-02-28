/* Day 4
 * Question 2
 * Write a program to calculate the sum of the digits of a number.
 * Also calculate their average.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int number, digitCount;
 	float sum = 0, average;

 	printf("Enter a number: ");
 	scanf("%d", &number);

 	while(number)
 	{
 		sum += num%10;
 		num /= 10;
 		digitCount++;
 	}

 	average = sum/digitCount;

 	printf("Sum: %.f \nAverage: %.2f \n", sum, average);


 }