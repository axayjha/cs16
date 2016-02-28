/* Day 4
 * Question 1(a)
 * Write a program to calculate the sum of the numbers between m and n using while loop
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int m, n, sum=0;
 	printf("Enter the first number (m): ");
 	scanf("%d", &m);

 	printf("\nEnter the second nunber (n): ");;
 	scanf("%d", &n);

 	if(n > m) while(++m < n) sum += m ;
 	else while(++n < m) sum += n;

 	/*Not including m or n. Sum of only the numbers between m and n.*/

 	printf("\nSum: %d\n", sum);



 }

 /* Output

 Enter the first number (m): 1

 Enter the second nunber (n): 10 

 Sum: 44


*/