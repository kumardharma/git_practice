#include<stdio.h>
int bit_toggle(int n1,int n2)
{
	return n1^n2;
}
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n1,n2;
	printf("Enter the number n1 and n2\n");
	scanf("%d%d",&n1,&n2);

	printf("n1=");
	print_binary(n1);
	printf("n2=");
	print_binary(n2);
	printf("output=%d\n",bit_toggle(n1,n2));
	print_binary(bit_toggle(n1,n2));
}
