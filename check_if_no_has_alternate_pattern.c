#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(((a>>1)&a)==0)
		printf("YES\n");
	else
		printf("NO\n");
}
