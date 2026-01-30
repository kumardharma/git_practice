#include<stdio.h>
void main()
{
	static char *arr[]={"black","white","pink","violet"};
	char **ptr[]={arr+3,arr+2,arr+1,arr},***p;
	p=ptr;
	++p;
	printf("%s\n",**p+1);
}
