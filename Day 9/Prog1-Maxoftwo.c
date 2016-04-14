/* Day 9
 * Question 1
 * Write a program to find the max of two numbers using function
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int max(int, int);

 int main()
 {
 	int a,b;
 	printf("Enter two numbers: ");
 	scanf("%d %d", &a,&b);
 	printf("Max: %d\n", max(a,b));

 }

 int max(int x, int y)
 {
 	return x>y?x:y;
 }

 /* Output

 Enter two numbers: 5 23
 Max: 23

*/