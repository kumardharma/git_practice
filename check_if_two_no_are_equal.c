#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the  numbers \n");
	scanf("%d%d",&a,&b);
	if((a^b)==0)
		printf("Numbers are equal\n");
	else
		printf("Numbers are not equal\n");
}
