#include<stdio.h>
void main()
{
	int num,n,r,q,binary=0,i=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	num=n;
	printf("Binary of %d is:",n);
	while(n)
	{
		r=n%2;
		printf("%d",r);
		n=n/2;
	}
	printf("\n");
	//////////method2
	
	while(num)
	{
		r=num%2;
		num=num/2;
		binary=binary+(r*i);
		i=i*10;
	}
	printf("%d\n",binary);
}
