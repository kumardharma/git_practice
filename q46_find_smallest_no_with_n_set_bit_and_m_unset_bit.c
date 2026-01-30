#include<stdio.h>
void main()
{
	int n,m,num,x,y;
	printf("Enter the value of n,m\n");
	scanf("%d%d",&n,&m);
	num=(1<<(n+m))-1;
	x=(1<<(n-1)-1);
	y=(1<<(n+m-1))-1;
	x=x^y;
	num=num^x;
	printf("smallest no with n set bit and m unset bit is: %d\n",num);
}
