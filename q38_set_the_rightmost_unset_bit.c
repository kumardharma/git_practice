#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
int unset_bit_position(int n)
{
	int c=0,x;
	n=~n;//rightmost zero will be set,so finding pos ofrigtmost setbit;
	x=n&~(n-1);
	while(x)
	{
		x=x>>1;
		c++;
	}
	return c;
}
void  main()
{
	int n,p;
	printf("Enter teh value of n\n");
	scanf("%d",&n);
	print_binary(n);
	p=unset_bit_position(n);
	n=1<<(p-1)|n;//setting the rightmost unset bit at position p,
	print_binary(n);

}
