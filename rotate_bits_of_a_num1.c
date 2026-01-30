#include<stdio.h>
void print_binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}
void main()
{
	int n=229,i,shift_by;
	printf("Enter the no of rotation\n");
	scanf("%d",&shift_by);
	printf("binary before left rotation\n");
	print_binary(n);

	for(i=0;i<shift_by;i++)
	{
		if(n>>31)
		{
			n=n<<1;
			n=n|1;
		}
		else
		{
			n=n<<1;
			n=(n>>0)&0;
		}
		
	}
	printf("Binary after left rotation by %d\n",shift_by);
	print_binary(n);

}
