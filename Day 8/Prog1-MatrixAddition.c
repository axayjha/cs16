/* Day 8
 * Question 1
 * Write a program to add two matrices
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int m, n, i, j;
 	printf("Enter the order of two matrices (m*n): ");
 	scanf("%d*%d", &m,&n);
 	int matOne[m][n], matTwo[m][n], matSum[m][n];

 	printf("Enter the elements of first matrix: \n");
 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			scanf("%d", &matOne[i][j]);

 		}

 	}

 	printf("Enter the elements of second matrix: \n");
 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			scanf("%d", &matTwo[i][j]);

 		}
 	}


 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			matSum[i][j] = matOne[i][j] + matTwo[i][j];

 		}
 	}

 	printf("Sum of the above two matrices: \n");


 	for(i=0; i<m; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			printf("%2d ", matSum[i][j]);

 		}
 		printf("\n");
 	}




 }

 /* Output

Enter the order of two matrices (m*n): 3*3
Enter the elements of first matrix: 
1 2 3
2 3 4
3 4 5
Enter the elements of second matrix: 
1 2 3 
2 3 4
3 4 5
Sum of the above two matrices: 
 2  4  6 
 4  6  8 
 6  8 10 

 */
