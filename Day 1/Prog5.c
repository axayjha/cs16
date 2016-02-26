/* Question 5
 * Write a program to calculate the area and circumference of a circle
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

 #include <stdio.h>
 #define PIE 3.1414

 main()
 {
 	float radius, area, circumference;

 	printf("Enter the radius of the circle: ");
 	scanf("%f", &radius);

 	area = PIE*radius*radius;
 	circumference = 2*PIE*radius;

 	printf("\nArea: %.2f \nCirumference: %.2f\n", area, circumference);

 }