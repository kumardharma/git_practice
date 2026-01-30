#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter the value of n and m\n");
	scanf("%d%d",&n,&m);
	if((n&((1<<m)-1))==0)
		printf("YES\n");
	else
		printf("NO\n");
}
