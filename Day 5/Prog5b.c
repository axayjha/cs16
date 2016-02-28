/* Day 5
 * Question 5(b)
 * Write a program to find the sum of the series: 
	1 + (2^2)/2 + (3^2)/3 + ....... + (n^2)/n

 * using math.h.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <math.h>

int main()
 {
 	int n, i;
 	float sum = 0;

 	printf("Enter the length of the series: ");
 	scanf("%d", &n);

 	for(i = 1; i <= n; i++) 
 	{
 		printf("%d/%d ", i*i, i);
 		if (i< n) printf("+ ");
 		sum+= pow(i, 2)/i;
 	}

 	printf("= %.f\n", sum);

 }

 /* Output

 Enter the length of the series: 4
 1/1 + 4/2 + 9/3 + 16/4 = 10

 */
