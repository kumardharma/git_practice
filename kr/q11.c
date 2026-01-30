#include<stdio.h>
void main()
{
	char a=30, b=5;
	char *p=&a, *q=&b;
	printf("%d",p-q);
}
