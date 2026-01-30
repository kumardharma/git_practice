#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n,x;
	printf("Enter the value\n");
	scanf("%d",&n);
	print_binary(n);
	//first generate a no wth middle set bits
	x=(~1)^(1<<31);
	print_binary(x);
	n=n^(~x);
	print_binary(n);
}
