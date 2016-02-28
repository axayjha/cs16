/* Day 6
 * Question 4
 * Write a program to check whether a given array of integer contains duplicate values.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 	int i, j, length;

 	printf("Enter the length of the array: ");
 	scanf("%d", &length);

 	int arr[length];

 	printf("Enter %d elements of the array: \n", length);
 	for(i=0; i<length; i++) scanf("%d", &arr[i]);

 	printf("The array:\n{");
 	for(i=0; i<length; i++) printf(" %d", arr[i]);
 	printf("}\n");	

 	for (i=0; i<length; i++)
 	{
 		for(j=i+1; j<length; j++)
 			if (arr[i] == arr[j])
 			{
 				printf("The array contains duplicate elements.\n");
 				exit(0);
 			}
 	}

 	printf("The array does not contain duplicate elements.\n");
 		


 }