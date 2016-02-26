/* Day 2
 * Question 5
 * Write a program to illustrate the use of unary postfix increment and decrement operator
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

int main()
{
	int i, j;

	i = 4;
 	j = i++;

 	printf("i = 4; j = i++ ;\n");
 	printf("i = %d, j = %d\n\n", i, j);


 	i = 4;
 	j = i--;

 	printf("i = 4; j = i-- ;\n");
 	printf("i = %d, j = %d\n\n", i, j);
}

/*Output

i = 4; j = i++ ;
i = 5, j = 4

i = 4; j = i-- ;
i = 3, j = 4

*/