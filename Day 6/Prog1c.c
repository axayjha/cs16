/* Day 6
 * Question 1(c)
 * Write a program to print the non-fibonacci sequence upto a given number using array
 * 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #define DONTPRINT 0
 #define PRINT 1

 int main()
 {
 	int length, i, j, state;
 	printf("Enter the length of the sequence: ");
 	scanf("%d", &length);

 	int arr[length];
 
 	arr[0] = 0;
 	arr[1] = 1; 

 	for(i=2; i<length; i++)
 	{
 		arr[i] = arr[i-1] + arr[i-2];
  	}	

  	printf("\nNon-fibonacci numbers upto %d:\n", length);
  	for(i=0; i<length; i++)
  	{
  		state = PRINT;
  		for(j=0; j<length; j++)
		{
			if (i == arr[j]) state = DONTPRINT;
		}

		if(state == PRINT) printf("%d ", i);

  	}
  	printf("\n");

 }

/* Output

Enter the length of the sequence: 10

Non-fibonacci numbers upto 10:
4 6 7 9 

*/