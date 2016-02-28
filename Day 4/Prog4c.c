/* Day 4
 * Question 4(c)
 * Write a program to print the following pattern:

          1
        1 2 
      1 2 3 
    1 2 3 4 
 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


 #include <stdio.h>

 int main()
 {
 	int i, j, lengthDown, number = 1;

 	printf("Enter height of the patten: ");
 	scanf("%d", &lengthDown);

 	printf("Pattern: \n\n");
 	for (i = 0; i < lengthDown; i++)
 	{
    for(j = i; j<lengthDown; j++)
      printf(" ");
 		for (number = 1, j = 0; j <= i; j++, number++) 		
 			printf("%d", number); 

 		printf("\n");
  	}
 }
 

 /* Output

 Enter height of the patten: 5
 Pattern: 

      1
     12
    123
   1234
  12345


 */

