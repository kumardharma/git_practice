#include<stdio.h>
void main()
{
	char *p;
	int j;
	for(j=0;j<3;j++)
		scanf("%s",(p+j));//q and j both have gabage values:-segmentation fault
	for(j=0;j<3;j++)
		printf("%c",*(p+j));//seg fault
	for(j=0;j<3;j++)
		printf("%s",(p+j));//seg fault
}
