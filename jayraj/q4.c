#include<stdio.h>
void function(char **ptr)
{
	char *ptr1;
	ptr1=(ptr=ptr+sizeof(int))[-2];
	printf("%s\n",ptr1);
}
void main()
{
	char *arr[]={"ant","bat","cat","dog","egg","fly"};
	function(arr);
}
