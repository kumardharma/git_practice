#include<stdio.h>
int equal_sum_XOR(int n)
{
	int res,i,c=0;
	for(i=0;i<=n;i++)
		if((n^i)==(n+i))
		{
			c++;
			printf("i=%d, ",i);
		}
	return c;
}
void main()
{
	int n,r;
	printf("ENTER THE value of n\n");
	scanf("%d",&n);
	r=equal_sum_XOR(n);
	printf("%d\n",r);
}
