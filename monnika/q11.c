#include<stdio.h>
void main()
{
	void *vp;
	char ch='g',*cp="goofy";
	int j=20;
	vp=&ch;
	printf("%c",*(char*)vp);//g
	vp=&j;
	printf("%d",*(int*)vp);//20
	vp=cp;
	printf("%s",(char*)vp+3);//fy
}
