/* Day 4
 * Question 1(b)
 * Write a program to calculate the sum of the numbers between m and n using do-while loop
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

 	if(n > m) do{ sum += ++m;} while (m < n-1);
 	else do { sum += ++n;} while(n < m-1);

 	/*Not including m or n. Sum of only the numbers between m and n.*/

 	printf("\nSum: %d\n", sum);



 }

 /* Output

 Enter the first number (m): 10

 Enter the second nunber (n): 1

 Sum: 44


*/