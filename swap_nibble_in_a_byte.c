#include<stdio.h>
void print_binary(unsigned char c)
{
	for(int i=7;i>=0;i--)
		printf("%d",(c>>i)&1);
	printf("\n");
}
void main()
{
	unsigned char c,x,y;
	printf("Enter the value of c\n");
	scanf("%u",&c);
	print_binary(c);
	x=c&0x0f;//masking higher nubble 
	x=x<<4;
	y=c&0xf0;
	y=y>>4;
	c=x|y;
	print_binary(c);
}
