#include<stdio.h>
void main()
{
	int i=5;
	char ch[]="hai";
	char *ptr=ch;
	char *ptr="hai";//we cannot redefine same variable again,
	*ptr='m';
	printf("%s\n",ptr);
	printf("%d",++(**ptr));//we cant do double dereference on single pointer
}
