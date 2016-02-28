/* Day 6
 * Question 5
 * Write a program to insert a number at a given position in an array
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>

 int main()
 {
 	int i, length, number, position;

 	printf("Enter the length of the array: ");
 	scanf("%d", &length);

 	int arr[length+1];

 	printf("Enter %d elements of the array\n", length);
 	for(i=0; i<length; i++) scanf("%d", &arr[i]);

 	printf("Enter the number and the position to insert: \n");
 	scanf("%d %d", &number, &position);

 	printf("The initial array: \n{");	
    for(i=0; i<length; i++) printf(" %d", arr[i]);
    printf("}\n");

 	for(i=length; i>=position; i--) arr[i] = arr[i-1];
 	arr[position] = number;
 	
 	printf("\nThe final array: \n{");	
 	for(i=0; i<=length; i++) printf(" %d", arr[i]);
 	printf("}\n");	




 }

/* Output

Enter the length of the array: 5
Enter 5 elements of the array
2
3
6
4
3
Enter the number and the position to insert: 
4
2
The initial array: 
{ 2 3 6 4 3}

The final array: 
{ 2 3 4 6 4 3}

*/