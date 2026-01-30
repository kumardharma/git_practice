#include<stdio.h>
void main()
{
	static char *s[]={"apha","bravo","charlie","delta"};//100 107 113 121 adresses stored in 
	//**ptr[] in reverse
	char **ptr[]={s+3,s+2,s+1,s},***p;
	printf("%s\n%s\n%s\n%s\n",*ptr[0],*ptr[1],*ptr[2],*ptr[3]);
	p=ptr; //ptr is an array so base add of ptr is stored in ***p`
	++p;
	printf("%s\n",**p+1);
}
