#include<stdio.h>
char* togglecase(char *str)
{
	for(int i=0;str[i];i++)
		str[i]=str[i]^(1<<5);//toggling the 6th biT
	return str;
}
void main()
{
	char s[]="BITSILICA";
	printf(" toggled string:%s\n",togglecase(s));
	printf("Original string:%s\n",togglecase(s));
}
