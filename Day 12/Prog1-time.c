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

void addTime(time t1, time t2)
{
	int h,m,s;
	h=m=s=0;
	s=t1.ss+t2.ss;
	if(s>=60)
	{
		m+=1;
		s-=60;
	}
	m+= (t1.mm + t2.mm);
	if (m>=60)
	{
		h+=1;
		m-=60;
	}
	h+=(t1.hh+t2.hh);

	printf("Sum: %d:%d:%d\n", h,m,s);
}

void subTime(time t2, time t1)
{
	int h,m,s;
	h=m=s=0;


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

	if (t1.ss <= t2.ss) s+= (t2.ss-t1.ss);
	else 
	{
		s+= (t2.ss + 60 - t1.ss);
		m-=1;
	}
	
	if(t1.mm <= t2.mm) m+=(t2.mm - t1.mm);
	else {
		m+= (t2.mm +60 - t1.mm);
		h-=1;
	}
	
	h+= (t2.hh - t1.hh);

	printf("Difference: %d:%d:%d\n", h,m,s);


}

int main()
{
	int choice;
	time t1, t2;

	input:
	printf("Enter time #1 (in hh:mm:ss format): ");
	scanf("%d:%d:%d", &t1.hh, &t1.mm, &t1.ss);

	printf("Enter time #2 (in hh:mm:ss format): ");
	scanf("%d:%d:%d", &t2.hh, &t2.mm, &t2.ss);

	if((t1.hh*60*60 + t1.mm*60 + t1.ss) > (t2.hh*60*60 + t2.mm*60 + t2.ss)) 
	{
		printf("Second time should be greater than first one. Enter again. \n");
		goto input;

	}

	menu:
	printf("\nWhat do u want to do: \n");
	printf("-------------------------\n");
	printf("1. Add the times \n");
	printf("2. Subtract the times \n");




	printf("Your choice > ");
	scanf("%d", &choice);

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
