/* Day 10
 * Question 3
 * Write a program to append one string to another string
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <string.h>

 int main()
 {
 	char str[80], substr[80];
 	int i;
 	printf("Enter a string: ");
 	scanf("%s", str);
 	printf("Enter a substring to append: ");
 	scanf("%s", substr);
 	int l1=strlen(str), l2=strlen(substr);
 	
 	for(i=0; i<l2; i++)
 	{
 		str[l1+i] = substr[i];
 	}
 	str[l1+i]='\0';
 	printf("Final string: %s\n", str);

 }

 /* Output

Enter a string: akshay
Enter a substring to append: jha
Final string: akshayjha

*/
