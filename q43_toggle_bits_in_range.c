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
	printf("Enter the values of n,l,r\n");
	scanf("%d%d%d",&n,&l,&r);
	print_binary(n);
	num=((1<<l)-1)^((1<<r)-1);//it will give (l-r) set bits in the given range 
	print_binary(num);//ckecking the set bits in the range
	n=n^num;
	print_binary(n);
}
