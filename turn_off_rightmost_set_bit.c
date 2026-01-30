#include<stdio.h>
void print_binary(int p)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ", ((unsigned int)p >> i) & 1);
}
int fun(int q)
{
	return q&(q-1);
}
void main()
{
	int a=7,b;
	print_binary(a);
	printf("\n");
	b=fun(a);
	print_binary(b);
	printf("\n number after turning off rightmost bit %d\n",b);
}
