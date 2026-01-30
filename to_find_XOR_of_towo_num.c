#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int a,b,r=0,i;
	printf("Enter the numbers\n");
	scanf("%d %d",&a,&b);
	print_binary(a);
	print_binary(b);

	/*for(i=31;i>=0;i--)
	
	{	if((a>>i)!=(b>>i))
			r=r|(1<<i);
	}
	print_binary(r);*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int x,y;
	x=a|b;//gives 1 where either of bits set
	y=(~a)|(~b);//gives 0 where both bits are set
	//r=(a|b)&(~a|~b);
	r=x&y;
	print_binary(r);













	
}
