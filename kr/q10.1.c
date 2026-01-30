#include<stdio.h>
#include<string.h>
//nice question
void main()
{
	char *str="His";
	int i;
	for(i=0;i<strlen(str);i++)
		printf("%s",str++);
	printf("\n");
}
