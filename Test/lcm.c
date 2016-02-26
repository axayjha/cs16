#include <stdio.h>

int main()
{

	int n1, n2, factor=1, lcm=1;
	printf("Enter two numbers: \n");
	scanf("%d %d", &n1, &n2);
	
	while(factor <= (n1>n2?n1:n2))
	{
		
		if((n1%factor ==0) && (n2%factor==0)){
			n1=n1/factor;
			n2=n2/factor;
			lcm = lcm * factor;
			factor =1;
		}
		factor++;
	}

	lcm = lcm*n1*n2;

	printf("%d\n", lcm);

}

