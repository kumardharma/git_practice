#include<stdio.h>
void main()
{
	char arr[10]="Mango",*ptr;
	ptr=(&arr[1]++);//101=101+1 not possiblr,
	printf("%s",ptr++);
}
