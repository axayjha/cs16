/* Day 11
 * Question 4
 * Write a program to calculate the area of a circle using pointers
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */
  
 #include <stdio.h>
 #define PIE 3.1414
 void area(int, float*);
 int main()
 {
     float ar; int radius;
     
     printf("Enter radius: ");
     scanf("%d", &radius);
     area(radius, &ar);
     printf("Area= %.2f\n", ar);
 }
 
 void area(int radius, float *ar)
 {
     *ar = PIE*radius*radius;
 }
 
 
 /* Output
 
 Enter radius: 4
 Area= 50.26

*/