#include<stdio.h>
void main()
{
	unsigned int val=0x44434241;
	void *ptr=&val;
	for(int i=0;i<4;i++)
	{
		printf("%c ",*(char *)ptr++);

	}
	printf("\n");
}
