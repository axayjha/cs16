/* Day 11
 * Question 2
 * Write a program to read, display, add, subtract two complex numbers using structure
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
 
 #include <stdio.h>
 
 struct j
 {
     int a,b;
 } n1, n2;
 
 int main()
 {
     printf("Enter the real (a) and imaginary part (b) of the first complex number: ");
     scanf("%d %d", &n1.a, &n1.b);
     printf("Enter the real (a) and imaginary part (b) of the second complex number: ");
     scanf("%d %d", &n2.a, &n2.b);
     printf("\nFirst complex number entered = %d%+dj\n", n1.a,n1.b);
     printf("Second complex number entered = %d%+dj\n\n", n2.a,n2.b);
     printf("Their sum: %d%+dj\n", n1.a+n2.a, n1.b+n2.b);
     printf("Their difference: %d%+dj\n", n2.a-n1.a, n2.b-n1.b);
     
     
 }
 
 /* Output
 
Enter the real (a) and imaginary part (b) of the first complex number: 3 4
Enter the real (a) and imaginary part (b) of the second complex number: 5 2

First complex number entered = 3+4j
Second complex number entered = 5+2j

Their sum: 8+6j
Their difference: 2-2j

*/