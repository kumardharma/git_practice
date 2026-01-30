#include<stdio.h>
void main()
{
	int *ptr;
	ptr=one_d;// one_d is not declared so it is an error
	ptr+=3;//ptr=ptr+3
	printf("%d",*ptr);//
}
