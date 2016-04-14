/* Day 10
 * Question 1
 * Write a program to find the length of a string
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
#include <stdio.h>
int main()
{
	char str[80];
	int length;
	printf("Enter a string: ");
	scanf("%s", str);
	for(length=0; str[length]!='\0'; length++);
	printf("Length: %d\n", length);	

}

/* Output

Enter a string: akshay
Length: 6

*/

/*
strlen() from string.h is another way to get length of a string
*/
