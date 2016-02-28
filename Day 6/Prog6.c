/* Day 6
 * Question 6
 * Write a program to delete a number from a given position in an array
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int i, length, position;

 	printf("Enter the length of the array: ");
 	scanf("%d", &length);

 	int arr[length];

 	printf("Enter %d elements of the array\n", length);
 	for(i=0; i<length; i++) scanf("%d", &arr[i]);

 	printf("Enter the position of the number to delete: \n");
 	scanf("%d", &position);

 	printf("The initial array: \n{");	
    for(i=0; i<length; i++) printf(" %d", arr[i]);
    printf("}\n");

 	for(i=position; i<length; i++) arr[i] = arr[i+1]; 
 	
 	printf("\nThe final array: \n{");	
 	for(i=0; i<length-1; i++) printf(" %d", arr[i]);
 	printf("}\n");	
 }


 /* Output

Enter the length of the array: 7
Enter 7 elements of the array
36
42
3
5
1
8
56
Enter the position of the number to delete: 
4
The initial array: 
{ 36 42 3 5 1 8 56}

The final array: 
{ 36 42 3 5 8 56}

*/
