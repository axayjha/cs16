/* Day 4
 * Question 6
 * Write a program to print the multiplication table of the number entered by user
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int number, counter = 0;

 	printf("Enter a number: ");
 	scanf("%d", &number);

 	printf("\nMultiplication table of %d", number);
 	printf("\n--------------------------\n");
 	while(++counter <= 10)
 		printf("%2d X %2d = %3d\n", number, counter, number*counter);

 }


/* Output

Enter a number: 17

Multiplication table of 17
--------------------------
17 X  1 =  17
17 X  2 =  34
17 X  3 =  51
17 X  4 =  68
17 X  5 =  85
17 X  6 = 102
17 X  7 = 119
17 X  8 = 136
17 X  9 = 153
17 X 10 = 170

*/