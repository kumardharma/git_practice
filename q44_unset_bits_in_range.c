#include<stdio.h>
void print_binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n,l,r,num;
	printf("Enter the value of n,l,r\n");
	scanf("%d%d%d",&n,&l,&r);
	print_binary(n);
	num=~(((1<<l)-1)^((1<<r)-1));
	n=n&num;
	print_binary(n);
}
