/* Day 6
 * Question 7
 * Write a program to merge two arrays into one
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */


#include <stdio.h>

 int main()
 {
 	int i, length1, length2, final_length;

 	printf("Enter the length of the first array: ");
 	scanf("%d", &length1);
 	int arr1[length1];

 	printf("Enter %d elements of the first array: \n", length1);
 	for(i=0; i<length1; i++) scanf("%d", &arr1[i]);

 	printf("Enter the length of the second array: ");
 	scanf("%d", &length2);
 	int arr2[length2];

 	printf("Enter %d elements of the second array: \n", length2);
 	for(i=0; i<length2; i++) scanf("%d", &arr2[i]);	

 	final_length = length1 + length2;	

 	int finArr[final_length]; 	

 	for(i=0; i<length1; i++) finArr[i] = arr1[i];
 	for(i=0; i<length2; i++) finArr[i+length1] = arr2[i];

 	printf("First array: \n{");	
    for(i=0; i<length1; i++) printf(" %d", arr1[i]);
    printf("}\n");	

	printf("\nSecond array: \n{");	
    for(i=0; i<length2; i++) printf(" %d", arr2[i]);
    printf("}\n");	

	printf("\nMerged array: \n{");	
    for(i=0; i<final_length; i++) printf(" %d", finArr[i]);
    printf("}\n");	

 }


 /* Output

Enter the length of the first array: 5
Enter 5 elements of the first array: 
1
2
3
4
5
Enter the length of the second array: 3
Enter 3 elements of the second array: 
1
2
3
First array: 
{ 1 2 3 4 5}

Second array: 
{ 1 2 3}

Merged array: 
{ 1 2 3 4 5 1 2 3}

*/
