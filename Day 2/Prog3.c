/* Day 2
 * Question 3
 * Write a program to illustrate the use of bitwise operators (&, |, ^, ~, >>, <<)
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

int main()
{
	int i;

	i=5&6;
	printf("5 & 6 = %d\n", i);

	i=6|8;
	printf("6 | 8 = %d\n", i);

	i=5^7;
	printf("5^7 (5-XOR-7) = %d\n", i);

	i= 4 >> 2;
	printf("4 >> 2 = %d\n", i);

	i= 4 << 2;
	printf("4 << 2 = %d\n", i);

}

/* Output

5 & 6 = 4
6 | 8 = 14
5^7 (5-XOR-7) = 2
4 >> 2 = 1
4 << 2 = 16

*/