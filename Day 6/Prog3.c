/* Day 6
 * Question 3
 * Write a program to find the second largest number in an array
 * Assuming no duplicate elements
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

int main()
 {
 	int i, length, largest, secLargest;

 	printf("Enter the length of the array: ");
 	scanf("%d", &length);

 	int arr[length];

 	printf("Enter %d elements of the array: \n", length);
 	for(i=0; i<length; i++) scanf("%d", &arr[i]);

 	secLargest = largest = arr[0];

 	for(i=0; i<length; i++)	if(largest <= arr[i]) largest = arr[i];
 		

 	for(i=0; i<length; i++) if(secLargest <= arr[i] && arr[i]<largest) secLargest = arr[i];

 	printf("The Array: \n{");
 	for(i=0; i<length; i++) printf("  %d", arr[i]);
 	printf("}\n");	

 	printf("Second largest element: %d\n", secLargest );

 }
