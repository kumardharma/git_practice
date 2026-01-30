#include<stdio.h>
void main()
{
	int n,c=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		while(n)
		{
			n=n>>1;
			c++;
		}
		printf("The position of only set bit is: %d\n",c);
	}
	else
		printf("The number has more than one set bits\n");
}
