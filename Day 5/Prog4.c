/* Day 5
 * Question 4
 * Write a program to convert binary to decimal
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


 #include <stdio.h>
 #include <math.h>

 int main()
 {
 	int binary, decimal = 0, place = 0;

 	printf("Enter the base-2 number: ");
 	scanf("%d", & binary);

 	while (binary)
 	{
 		decimal +=  (binary%10)*pow(2, place);
 		binary /= 10;
 		place++;
 	}

 	printf("Its decimal: %d\n", decimal);
 }


 /* Output

 Enter the base-2 number: 1010
 Its decimal: 10

*/