#include<stdio.h>
int togglebit(int num,int k)
{
	return num^(1<<(k-1));
}
void main()
{
	int n,k,res;
	printf("Entere the number and bit value\n");
	scanf("%d%d",&n,&k);
	res=togglebit(n,k);
	printf("number after toggling Kth bit: %d\n",res);
}
