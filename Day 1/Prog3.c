/* Question 3
 * Write a program to read the length of two sides of a rectangle and 
 * then print the area and perimeter.
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
int main()
{
	float length, breadth, area, perimeter;

	printf("Enter length: ");
	scanf("%f", &length);

	printf("Enter breadth: ");
	scanf("%f", &breadth);

	area = length*breadth;
	perimeter = 2*(length + breadth);

	printf("Area: %.2f \nPerimeter: %.2f\n", area, perimeter);


}
 
/* Output

Enter length: 3
Enter breadth: 2
Area: 6.00 
Perimeter: 10.00

*/