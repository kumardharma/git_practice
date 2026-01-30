#include<stdio.h>
void main()
{
	char *var[]={"fruits","vegitables","meet","fish"};
	char **pvar;
	pvar=var;
	printf("%s\n",++*pvar);
	printf("%s\n",*pvar++);
	printf("%s\n",++*pvar);
}
