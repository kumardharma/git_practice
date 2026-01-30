#include<stdio.h>
void main()
{
	char str1[]="india";
	char str2[]="BIX";
	char *s1=str1, *s2=str2;
	while(*s1++=*s2++)
		printf("%s\n",str1);
}
