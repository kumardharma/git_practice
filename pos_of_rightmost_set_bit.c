#include<stdio.h>
#include<math.h>
void print_binary(int n)
{
	for(int i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	int n=12,r,s;
	r=n;
	print_binary(n);
	n=(~n)+1;
	s=n&r;
	s=log2(s);
	printf("Position of rightmost set bit is: %d\n",s);
	//print_binary(n&r);
}
