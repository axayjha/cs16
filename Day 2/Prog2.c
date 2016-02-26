/* Day 2
 * Question 2
 * Write a program to illustrate the use of logical operators (&&, ||, !)
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0 

int main()
{
	int i;

	i = TRUE && FALSE;
	printf("True && False: %d\n", i);

	i = TRUE || FALSE;
	printf("True || False: %d \n", i);

	i = !TRUE;
	printf("!TRUE: %d \n", i);

	i = !FALSE;
	printf("!FALSE: %d \n", i);

}

/* Output

True && False: 0
True || False: 1 
!TRUE: 0 
!FALSE: 1 

*/
