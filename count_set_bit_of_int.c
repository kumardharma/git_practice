#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
int count_set_bits(int n)
{
	int c=0;
	for(int i=0;i<32;i++)
		if((n>>i)&1)
			c++;
	return c;
}
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	print_binary(n);
	printf("Number of set bits in %d id: %d\n",n,count_set_bits(n));

}
