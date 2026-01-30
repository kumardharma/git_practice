#include<stdio.h>
void main()
{
	char *str;
	str="%d\n";
	str++;
	str++;
	printf(str-2,500);//this is like pf("%d\n",500):-500 will be printed

}


