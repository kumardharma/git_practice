#include<stdio.h>
void main()
{
	static char *s[]={"white","yellow","violet","black"};
	char **ptr[]={s+3,s+2,s+1,s},***p;
	/*for(int i=0;i<4;i++)
		printf("%u ",s[i]);*/
	p=ptr;
	**++p;
	printf("%s\n",*--*++p+3);  
}
