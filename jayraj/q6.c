#include<stdio.h>
void main()
{
	char *ptr="Pointer in c",arr[15];
	arr[15]=*ptr;
	printf("%c",arr[0]);
}//index of arr[15] will be 0-14, so this is a run time error
