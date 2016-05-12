/* Day 11
 * Question 5
 * Write a program to find the largest among 3 numbers using structure
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 int max(int, int);
 int main()
 {
     struct numbers
     {
         int n1, n2, n3;
     } num;
     printf("Enter three numbers :");
     scanf("%d %d %d", &num.n1, &num.n2, &num.n3);
     printf("Max: %d\n", max(max(num.n1, num.n2), num.n3));
}

int max(int x, int y)
{
    return x>y?x:y;
} 

/* Output

Enter three numbers :43 56 32
Max: 56

*/