#include<stdio.h>
void main()
{
	int arr[]={2,3,4};
	char *p;
	p=arr;
	p=(char*)((int*)(p));
	printf("%d",*p);
	p=(int*)(p+4);
	printf(" %u\n",*(int*)(p+1));
}
