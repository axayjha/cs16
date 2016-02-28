/* Day 4
 * Question 1(c)
 * Write a program to calculate the sum of the numbers between m and n using for loop
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

 	if(n > m) for(++m; m<n; m++) sum+= m;
 	else for(++n; n<m; n++) sum += n;

 	/*Not including m or n. Sum of only the numbers between m and n.*/

 	printf("\nSum: %d\n", sum);



 }

 /* Output

 Enter the first number (m): 2

 Enter the second nunber (n): 6

 Sum: 12



*/