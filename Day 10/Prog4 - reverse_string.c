/* Day 10
 * Question 4
 * Write a program to reverse a string and check if its a palindrome
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	char str[80], strrev[80]; int i,l;
 	int isPalindrome = 1;
 	printf("Enter a string: ");
 	scanf("%s", str);
 	for(l=0; str[l]!='\0';l++);
 	for (i=0,l--;l>-1;l--,i++)	 	
 		strrev[i] = str[l];
 	strrev[i] = '\0';
 	printf("Reversed string: %s\n", strrev);

 	for(l=0; l<i; l++)
 	{
 		if(str[l]!=strrev[l]) isPalindrome = 0;
 	}
 	if(isPalindrome) printf("It's a palindrome\n");
 	else printf("Not a palindrome\n");
 	

 }

 /* Output

 Enter a string: akshay
 Reversed string: yahska
 Not a palindrome
 
*/
