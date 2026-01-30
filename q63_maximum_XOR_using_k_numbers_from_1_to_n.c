#include<stdio.h>
int max_XOR(int n, int k)
{
	if(k==1)
		return n;
	int res=1;
	while(res<=n)
	{
		res=res<<1;
	}
	return res-1;
}
void main()
{
	int n,k,r;
	printf("Enter the value of n and k\n");
	scanf("%d%d",&n,&k);
	printf("max XOR=%d\n",max_XOR(n,k));
}
