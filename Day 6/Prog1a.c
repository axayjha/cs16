/* Day 6
 * Question 1(a)
 * Write a program to print the fibonacci sequence upto n terms
 * 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int length, i;
 	printf("Enter the length of the sequence: ");
 	scanf("%d", &length);

 	int arr[length];
 
 	arr[0] = 0;
 	arr[1] = 1; 

 	for(i=2; i<length; i++)
 	{
 		arr[i] = arr[i-1] + arr[i-2];
  	}	

  	printf("\nFibonacci sequence of length %d:\n", length);
  	for (i = 0; i < length; i++) printf("%d ", arr[i]);
  	printf("\n");	

 }

 /* Output

 Fibonacci sequence of length 9:
 0 1 1 2 3 5 8 13 21 

 */