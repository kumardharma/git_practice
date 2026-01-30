#include<stdio.h>
void main()
{
	char *ptr1="hello world";
	char *ptr2="hello world";
	char *ptr3="hellO world";
	printf("ptr1=%u,ptr2=%u\n",ptr1,ptr2);
	printf("ptr1=%u,ptr2=%u\n",ptr1,ptr3);
}//declaring ptr with same string , same adress is assigned
