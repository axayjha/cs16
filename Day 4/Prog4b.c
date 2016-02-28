/* Day 4
 * Question 4(b)
 * Write a program to print the following pattern:
   A
   A B
   A B C 
   A B C D 
   A B C D E

 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


 #include <stdio.h>

 int main()
 {
 	int i, j, lengthDown;
 	char ch = 'A';

 	printf("Enter height of the patten: ");
 	scanf("%d", &lengthDown);

 	printf("Pattern: \n\n");
 	for (i = 0; i < lengthDown; i++)
 	{
 		for (ch = 'A', j = 0; j <= i; j++, ch++) 		
 			printf("%2c", ch); 

 		printf("\n");
  	}
 }
 

 /* Output

 Enter height of the patten: 5
 Pattern: 

  A
  A B
  A B C
  A B C D
  A B C D E


 */

