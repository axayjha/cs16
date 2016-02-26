#include <stdio.h>
#define TRUE 1
#define FALSE 0


int main()
{
	int i,powerOfTwo, num=61, result=1;
	for(i=0; i< num/2; i++)
	{
		result = result*2;
		powerOfTwo=TRUE;

		if (result == num){
			printf("A power of 2\n");
			break;
		}
		
		powerOfTwo=FALSE;


	}
	if (powerOfTwo == FALSE){
		printf("Not a power of 2\n");
	}
}