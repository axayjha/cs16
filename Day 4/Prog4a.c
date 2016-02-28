/* Day 4
 * Question 4(a)
 * Write a program to print the following pattern:
   0
   1 2
   3 4 5 
   6 7 8 9
   10 11 12 13 14   
 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int i, j, number = 0, lengthDown;

 	printf("Enter height of the patten: ");
 	scanf("%d", &lengthDown);

 	printf("Pattern: \n\n");
 	for (i = 0; i < lengthDown; i++)
 	{
 		for (j = 0; j <= i; j++)
 		{
 			printf("%3d", number);
 			number++;
 		}
 		printf("\n");
  	}
 }

 /* Output

 Enter height of the patten: 6
 Pattern: 

   0
   1  2
   3  4  5
   6  7  8  9
  10 11 12 13 14
  15 16 17 18 19 20

  */
