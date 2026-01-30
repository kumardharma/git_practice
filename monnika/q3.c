#include<stdio.h>
void main()
{
	int i=257;
	int *iptr=&i;
	printf("%d %d",*((char*)iptr),*((char*)iptr+1));
	
}
