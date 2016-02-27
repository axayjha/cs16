/* Day 3
 * Question 2(b)
 * Write a program to get a char and then determine if it is a vowel or not using switch-case
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	char letter;

 	printf("Enter a letter: ");
 	scanf("%c", &letter);

 	switch(letter)
 	{
 		case 'a':
 		case 'A':
 		case 'e':
 		case 'E':
 		case 'i':
 		case 'I':
 		case 'o':
 		case 'O':
 		case 'u':
 		case 'U':
 			printf("%c is a vowel.\n", letter);
 			break;

 		default:
 			printf("%c is a consonant.\n", letter);	

 	}
 }


 /* Output

 Enter a letter: E
 E is a vowel.

 */
