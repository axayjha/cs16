/* Day 10
 * Question 2
 * Write a program to convert all the characters in a string to lower case
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

int main()
{
	char str[80];
	int i, l;
	printf("Enter a string: ");
	scanf("%s", str);
	for(l=0; str[l]!='\0'; l++);
	for (i=0; i<l; i++)
	{
		if (str[i]<91 && str[i]>64) str[i] = str[i]+32;
	}
	printf("Lower cased: %s\n", str);	



}


/* Output

Enter a string: Akshay
Lower cased: akshay

*/


/*
On using gets/puts, the new gcc compiler gives following warning, so better avoid using these functions

warning: the `gets' function is dangerous and should not be used.

*/
