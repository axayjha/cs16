/* Day 10
 * Question 5
 * Write a program to extract a substring from a given string
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 int main()
 {
 	char str[80], substr[80];
 	int start, end, i,j;
 	printf("Enter a string: ");
 	scanf("%s", str);
 	printf("Enter start and end positions to extract\nthe substring (index starting from 0) : ");
 	scanf("%d %d", &start, &end);
 	for(i=start, j=0; i<=end; i++, j++)	
 		substr[j] = str[i];
 	substr[j] = '\0';
 	printf("Extraxted substring: %s\n", substr);

 }

 /* Output

Enter a string: computer
Enter start and end positions to extract
the substring (index starting from 0) : 3 6
Extraxted substring: pute

*/
