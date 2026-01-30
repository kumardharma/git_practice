#include<stdio.h>
#include<string.h>
void main()
{
	int i,n;
	char *x="Alice";
	n=strlen(x);
	*(x+1)=x[n];//"Alice" is stored in code sction so we can't modify 
	for(i=0;i<n;i++)
	{
		printf("%s",x);
		x++;
	}
	printf("\n",x);
}
