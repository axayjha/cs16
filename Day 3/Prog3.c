/* Day 3
 * Question 3
 * Write a program to find whether a given year is a leap year or not
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int year;

 	printf("Enter the year: ");
 	scanf("%d", &year);

 	if((year%100 != 0 && year%4 == 0) || year%400==0)
 		printf("%d is a leap year.\n", year);
 	else
 		printf("%d is not a leap year.\n", year);

 }
 

 /* Output

 Enter the year: 2016
 2016 is a leap year.

 */
