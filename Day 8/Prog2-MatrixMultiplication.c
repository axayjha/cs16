/* Day 8
 * Question 2
 * Write a program to multiply two matrices
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int m, n, p, q, i, j, k, temp=0;

 	printf("Enter the order of first matrix (m*n): ");
 	scanf("%d*%d", &m,&n);
 	int first[m][n];
 	printf("Enter the elements of first matrix\n");
 	for(i=0; i<m; i++)
 		for(j=0; j<n; j++) scanf("%d", &first[i][j]);

 	printf("Enter the order of second matrix (m*n): ");
 	scanf("%d*%d", &p,&q);		

 	if (n!=p) printf("Given matrices can't be multiplied");
 	else
 	{
 		int second[p][q], product[m][q];
	 	printf("Enter the elements of second matrix\n");
	 	for(i=0; i<p; i++)
	 		for(j=0; j<q; j++) scanf("%d", &second[i][j]);


	 	for(i=0; i<m; i++)
	 	{
	 		for(j=0; j<q; j++)
	 		{
	 			for(k=0; k<p; k++)
	 			{	
	 				temp += first[i][k]*second[k][j];
	 			}
	 			product[i][j] = temp;
	 		}
	 	}

	 	printf("Multiplied matrix: \n");
	 	for(i=0; i<m; i++)
	 	{
	 		for(j=0; j<q; j++)
	 		{
	 			printf("%2d ", product[i][j]);

	 		}
	 		printf("\n");
	 	}




 	}


 }


/* Output

Enter the order of first matrix (m*n): 2*3
Enter the elements of first matrix
1 
0 
0
1
1
0
Enter the order of second matrix (m*n): 3*2
Enter the elements of second matrix
1
0
0
1
1
0
Multiplied matrix: 
 1  1 
 2  3 

 */
