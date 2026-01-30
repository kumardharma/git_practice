#include<stdio.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
int turn_off_bit(int n,int pos)
{
	return n&~(1<<pos);
}
void main()
{
	int n,pos,n2;
	printf("ENter the number\n");
	scanf("%d",&n);
	printf("Enter the bit number you want to turn off\n");
	scanf("%d",&pos);
	print_binary(n);
	n2=turn_off_bit(n,pos);
	print_binary(n2);
}
