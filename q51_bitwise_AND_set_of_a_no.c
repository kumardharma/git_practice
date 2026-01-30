#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("AND set of n\n");
	for(i=0;i<=n;i++)
		if((n&i)==i)
			printf("%d&%d=%d\n",n,i,i);
	/////////////M2
	i=n;
	while(i)
		
	{
		//i=(i-1)&n;
		printf("%d\n",i=(i-1)&n);
	}
}
