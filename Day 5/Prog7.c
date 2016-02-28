/* Day 5
 * Question 7
 * Write a program to check whether a given integer is an angstrom number or not
 * Angstrom number: A number which is equal to the sum of cube of its digits.
 * Ex- 153 = 1^3 + 5^3 + 3^3
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
 	int number, numberCopy, sumOfCube=0;

 	printf("Enter a number: ");
 	scanf("%d", &number);

 	numberCopy = number;

 	while(number)
 	{
 		sumOfCube += pow((number%10), 3);
 		number /= 10;
 	}

 	if (sumOfCube == numberCopy) printf("%d is an Angstrom number\n", numberCopy);
 	else printf("%d is not an Angstrom number\n", numberCopy);

 }

 /* Output

 Enter a number: 153
 153 is an Angstrom number

 */


