#include<stdio.h>
void main()
{
	int a,b,x,y,res=0;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	x=a,y=b;
	while(b!=1)
	{
		a=a<<1;//double
		b=b>>1;//halve
		if(b&1!=0)
			res=res+a;
	}
	printf("%dx%d= %d \n",x,y,res);
}
