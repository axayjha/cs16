/* Day 11
 * Question 3
 * Write a program to readan array of n numbers and find the smallest among them (using function)
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 int min(int *, int);
 
 int main()
 {
     int n,i;
     printf("Enter the length of the array: ");
     scanf("%d", &n);
     int a[n];
     printf("Enter the elements of the array: ");
     for(i=0; i<n;i++)
     {
         scanf("%d", &a[i]);
     }    
     printf("Minimum: %d", min(a, n));
}

int min(int *a, int n)
{
    int i, sm;
    sm=a[0];
    for(i=1; i<n; i++)
    {
        if(sm>a[i]) sm=a[i];
    }
    return sm;
}

/* Output

Enter the length of the array: 4
Enter the elements of the array: 4 3 5 6
Minimum: 3

*/