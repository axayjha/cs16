/* Day 11
 * Question 5
 * Write a program to find the largest among 3 numbers using pointer
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 
 void max(int, int, int, int *);
 
 int main()
 {
     int n1, n2, n3, maxx;
     printf("Enter three numbers: ");
     scanf("%d %d %d", &n1, &n2, &n3);
     max(n1, n2, n3, &maxx);
     printf("Maximum: %d\n", maxx);
 }
 
 void max(int x, int y, int z, int *maxx)
 {
     *maxx= x>y?(x>z?x:z):(y>z?y:z);
 }
 
 /* Output
 
Enter three numbers: 76 34 12
Maximum: 76

*/