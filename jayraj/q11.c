#include<stdio.h>
void main()
{
	char arr[10]="Mango",*ptr;
	ptr=(&arr[1]++);
	printf("%s\n",ptr++);
}
