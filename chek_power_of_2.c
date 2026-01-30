
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	while(n!=1)
	{
		if((n%2!=0)&&(n!=1))
			printf("The number is not a power  of 2\n");
		n=n/2;
	}
	if(n==1)
		printf("Tne number is power of 2\n");
	else
		printf("Tne number is not a power of 2\n");
}
