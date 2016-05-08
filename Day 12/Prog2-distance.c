/* Day 12
 * Question 2
 * Write a menu driven program to add, subtract, read, display two distances in km, m using pointer variable 
 * and passing it to functions
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>



typedef struct
{
	int km, m;


} distance;

void getDistance(distance *);
void display(distance);
int metres(distance);
void addDistance(distance, distance);
void subDistance(distance, distance);

int main()
{
	int choice;
	distance d1, d2;

	menu:
	printf("\nWhat do u want to do: \n");
	printf("-------------------------\n");
	printf("1. Add the distances\n");
	printf("2. Subtract the distances \n");




	printf("Your choice > ");
	scanf("%d", &choice);



	input:
	printf("Enter distance #1 (in km, m  format): ");
	getDistance(&d1);

	printf("Enter distance #2 (in km, m format): ");
	getDistance(&d2);

	if((metres(d1) > metres(d2)) && choice==2) 
	{
		printf("Second distance should be greater than first one. Enter again. \n");
		goto input;

	}

	
	switch(choice)
	{
		case 1:
			addDistance(d1,d2);
			break;
		case 2:
			subDistance(d2,d1);
			break;
		default:
			printf("Invalid option. Enter the option number (1 or 2)\n"); 
			printf("Try again\n");
			goto menu;					

	}
	return 0;


}



void addDistance(distance d1, distance d2)
{
	distance d;
	d.km=0;
	d.m=d1.m+d2.m;
	if(d.m>=1000){
		d.m-=1000;
		d.km+=1;
	}
	d.km += (d1.km+d2.km);

	printf("Sum: ");
	display(d);

}

void subDistance(distance d2, distance d1)
{
	distance d;
	d.km=0;

	if(d1.m>=1000){
		d1.m-=1000;
		d1.km+=1;
	}

	if(d2.m>=1000){
		d2.m-=1000;
		d2.km+=1;
	}

	if (d2.m > d1.m) d.m = d2.m - d1.m;
	else
	{
		d.m = d2.m + 1000 - d1.m;
		d.km -= 1;
	}

	d.km += (d2.km - d1.km);

	printf("Difference: ");
	display(d);




}

void display(distance d)
{
	printf("%dkm %dm \n", d.km, d.m);
}

void getDistance(distance *d)
{
	int k,mt;
	scanf("%d, %d", &k, &mt);
	(*d).km = k; (*d).m = mt;
}

int metres(distance d)
{
	return d.km*1000 + d.m;
}

/* Output

What do u want to do:
-------------------------
1. Add the distances
2. Subtract the distances
Your choice > 2
Enter distance #1 (in km, m  format): 5, 400
Enter distance #2 (in km, m format): 3, 200
Second distance should be greater than first one. Enter again.
Enter distance #1 (in km, m  format): 3, 600
Enter distance #2 (in km, m format): 4, 200
Difference: 0km 600m

*/
