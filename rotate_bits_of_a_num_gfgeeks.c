#include<stdio.h>
void print_binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
int  rotate_left(int n, int d)
{
	return (n>>(32-d))|(n<<d);
}
int rotate_right(int n,int d)
{
	return (n<<(32-d))|(n>>d);
}
void main()
{
	int n=229,d,y,z;
	printf("Enter the no of rotation\n");
	scanf("%d",&d);
	
	printf("Binary before rotation\n");
	print_binary(n);
	printf("Binary after left rotation by %d\n",d);
	y=rotate_left(n,d);
	print_binary(y);
	printf("Binary after right rotation by %d\n",d);
	z=rotate_right(n,d);
	print_binary(z);
}
