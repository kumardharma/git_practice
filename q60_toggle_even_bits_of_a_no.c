#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	print_binary(n);
	n=n^0xAAAAAAAA;//it toggles 16 bits only
	print_binary(n);
	//n=(n>>15)^0xAAAA;
	print_binary(n);
}
