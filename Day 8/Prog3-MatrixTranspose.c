/* Day 8
 * Question 3
 * Write a program to print the transpose of a matrix
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int i, j, m, n;
 	printf("Enter the order of the matrix (m*n): ");
 	scanf("%d*%d", &m,&n);
 	int matrix[m][n];
 	printf("Enter the elements of the matrix: \n");
 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			scanf("%d", &matrix[i][j]);
 		}
 	}

 	printf("Transpose of the matrix: \n");

 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			printf("%d ", matrix[j][i]);
 		}
 		printf("\n");

 	}
 	

 }

 /* Output

Enter the order of the matrix (m*n): 3*3
Enter the elements of the matrix: 
1 2 3
4 5 6
7 8 9
Transpose of the matrix: 
1 4 7 
2 5 8 
3 6 9 

*/