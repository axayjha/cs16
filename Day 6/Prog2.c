/* Day 6
 * Question 2
 * Write a program to interchange the largest and the smallest numbers in an array 
 * (Assuming no duplicate elements) 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int i, length, smallest, smallPos, largest, largePos;

 	printf("Enter the length of the array: ");
 	scanf("%d", &length);

 	int arr[length];

 	printf("Enter %d elements of the array: \n", length);
 	for(i=0; i<length; i++) scanf("%d", &arr[i]);

 	smallest = largest = arr[0];

 	for(i=0; i<length; i++)
 	{
 		if(smallest >= arr[i]) 
 		{
 			smallest = arr[i];
 			smallPos = i;
 		}

 		if(largest <= arr[i])
 		{
 			largest = arr[i];
 			largePos = i;
 		}

 	}


 	printf("Initial Array: \n{");
 	for(i=0; i<length; i++) printf("  %d", arr[i]);
 	printf("}\n");

 	arr[largePos] = smallest;
 	arr[smallPos] = largest;

 	printf("\nFinal Array: \n{");
 	for(i=0; i<length; i++) printf("  %d", arr[i]);
 	printf("}\n");

 } 		



/* Output

Enter the length of the array: 6
Enter 6 elements of the array: 
1
5
53
54
3
7
Initial Array: 
{  1  5  53  54  3  7}

Final Array: 
{  54  5  53  1  3  7}

*/