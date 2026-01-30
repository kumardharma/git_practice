#include<stdio.h>
void main()
{
	int n,m,num;
	printf("Enter the value of n,m\n");
	scanf("%d%d",&n,&m);
	num=(1<<n)-1;
	num=num<<m;
	printf("largest no is:%d\n",num);
	/////////////////////////////////////////method 2
	
	num=(1<<(n+m))-1;
	num=num&~((1<<m)-1);
	printf("%d\n",num);

}
