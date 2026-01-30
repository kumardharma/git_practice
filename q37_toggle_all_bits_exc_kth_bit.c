#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
int toggle(int num,int k)
{
	return ~(num^(1<<k));
}
void main()
{
	int n,k,num,res;
	printf("Enter the value of n and k\n");
	scanf("%d%d",&n,&k);
	num=n;
	print_binary(n);
	for(int i=31;i>=0;i--)
	{
		if(i!=k)
			n=n^(1<<i);
	}
	print_binary(n);
	///////method2
	res=toggle(num,k);
	print_binary(res);
}
