/* Day 5
 * Question 3
 * Write a program to convert decimal to binary
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <math.h>

 int main()
 {
 	int decimal, binary=0, place=0;

 	printf("Enter the base-10 number: ");
 	scanf("%d", &decimal);

 	while (decimal)
 	{
 		binary +=  (decimal%2)*pow(10, place);
 		decimal /= 2;
 		place++;
 	}

 	printf("Its Binary: %d\n", binary);
 }


 /* Output

 Enter the base-10 number: 6
 Its Binary: 110

*/