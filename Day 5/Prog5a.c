/* Day 5
 * Question 5(a)
 * Write a program to find the sum of the series: 
	1/2 + 2/3 + 3/4 + ....... + n/(n+1)

 * where n is entered by the user.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int n, i;
 	float sum = 0;

 	printf("Enter the length of the series: ");
 	scanf("%d", &n);

 	for(i = 1; i <= n; i++) 
 	{
 		printf("%d/%d ", i, i+1);
 		if (i< n) printf("+ ");
 		sum+= ((float)i)/(i+1);
 	}

 	printf("= %.4f\n", sum);

 }

 /* Ouput 

 Enter the length of the series: 4
 1/2 + 2/3 + 3/4 + 4/5 = 2.7167

 */