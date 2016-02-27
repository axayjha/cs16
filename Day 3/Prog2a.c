/* Day 3
 * Question 2(a)
 * Write a program to get a char and then determine if it is a vowel or not using if-else
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

 	if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
 		printf("%c is a vowel.\n", letter);

 	else
 		printf("%c is a consonant.\n", letter);
 }


 /* Output
 
 Enter a letter: w
 w is a consonant.

 */

 
