#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int a,i,set=0,clear=0,r;
	printf("Enter the number\n");
	scanf("%d",&a);
	print_binary(a);
	for(i=0;i<8;i++)
	{
		if(a>>i)
			set++;
		else
			clear++;
	}

	r=clear^set;
	print_binary(r);
}
