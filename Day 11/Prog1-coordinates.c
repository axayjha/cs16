/* Day 11
 * Question 1
 * Write a program to enter the co-ordinates of two points and calculate the distance 
 * between them using structure
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>
#include <math.h>

struct point
{
	int x,y;
} p1, p2;

int main()
{
	printf("Enter x and y coordinates of the first point: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Enter x and y coordinates of the second point: ");
	scanf("%d %d", &p2.x, &p2.y);
	
	float dist = sqrt((float)(pow((p2.y-p1.y),2) + pow((p2.x-p1.x), 2)));
	printf("Distance between (%d, %d) and (%d,%d) is %.2f units \n", p1.x,p1.y,p2.x,p2.y,dist);
}

/* Output

Enter x and y coordinates of the first point: 0 0
Enter x and y coordinates of the second point: 3 4
Distance between (0, 0) and (3,4) is 5.00 units

*/