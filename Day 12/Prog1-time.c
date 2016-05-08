/* Day 12
 * Question 1
 * Write a menu driven program to add, subtract, read, display two times in hr min sec using structure
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

typedef struct
{
	int hh,mm,ss;


} time;

void addTime(time, time);
void subTime(time, time);
void getTime(time *);
void displayTime(time);
long int seconds(time);


int main()
{
	int choice;
	time t1, t2;

	menu:
	printf("\nWhat do u want to do: \n");
	printf("-------------------------\n");
	printf("1. Add the times \n");
	printf("2. Subtract the times \n");




	printf("Your choice > ");
	scanf("%d", &choice);



	input:
	printf("Enter time #1 (in hh:mm:ss format): ");
	getTime(&t1);

	printf("Enter time #2 (in hh:mm:ss format): ");
	getTime(&t2);

	if((seconds(t1) > seconds(t2)) && choice==2) 
	{
		printf("Second time should be greater than first one. Enter again. \n");
		goto input;

	}

	
	switch(choice)
	{
		case 1:
			addTime(t1,t2);
			break;
		case 2:
			subTime(t2,t1);
			break;
		default:
			printf("Invalid option. Enter the option number (1 or 2)\n"); 
			printf("Try again\n");
			goto menu;					

	}
	return 0;




}




void addTime(time t1, time t2)
{
	time t;
	t.hh=t.mm=t.ss=0;

	t.ss=t1.ss+t2.ss;
	if(t.ss>=60)
	{
		t.mm+=1;
		t.ss-=60;
	}
	t.mm+= (t1.mm + t2.mm);
	if (t.mm>=60)
	{
		t.hh+=1;
		t.mm-=60;
	}
	t.hh+=(t1.hh+t2.hh);

	printf("Sum: ");
	displayTime(t);
}

void subTime(time t2, time t1)
{
	time t;
	t.hh=t.mm=t.ss=0;


	if(t1.ss>=60)
	{
		t1.mm+=1;
		t1.ss-=60;
	}

	if (t1.mm>=60)
	{
		t1.hh+=1;
		t1.mm-=60;
	}

	if(t2.ss>=60)
	{
		t2.mm+=1;
		t2.ss-=60;
	}

	if (t2.mm>=60)
	{
		t2.hh+=1;
		t2.mm-=60;
	}

	if (t1.ss <= t2.ss) t.ss+= (t2.ss-t1.ss);
	else 
	{
		t.ss+= (t2.ss + 60 - t1.ss);
		t.mm-=1;
	}
	
	if(t1.mm <= t2.mm) t.mm+=(t2.mm - t1.mm);
	else {
		t.mm+= (t2.mm +60 - t1.mm);
		t.hh-=1;
	}
	
	t.hh+= (t2.hh - t1.hh);

	printf("Difference: ");
	displayTime(t);


}

void getTime(time *t)
{
	int h,m,s;
	scanf("%d:%d:%d", &h, &m, &s);
	(*t).hh=h; (*t).mm=m; (*t).ss=s; 
}

void displayTime(time t)
{
	printf("%d:%d:%d\n", t.hh,t.mm,t.ss);
}

long int seconds(time t)
{
	return t.hh*60*60 + t.mm*60 + t.ss;

}



/* Output

Enter time #1 (in hh:mm:ss format): 8:40:30
Enter time #2 (in hh:mm:ss format): 6:30:40
Second time should be greater than first one. Enter again.
Enter time #1 (in hh:mm:ss format): 6:30:40
Enter time #2 (in hh:mm:ss format): 8:40:30

What do u want to do:
-------------------------
1. Add the times
2. Subtract the times
Your choice > 2
Difference: 2:10:50

*/
