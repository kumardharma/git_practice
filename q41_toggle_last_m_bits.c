#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n,m;
	printf("Enter the number and no of bits to be toggled from last\n");
	scanf("%d%d",&n,&m);
	print_binary(n);
	n=n^((1<<m)-1);//((1<<m)-1) this will give a no with m set bits from last
	print_binary(n);
}
