#include<stdio.h>
int XOR_1_to_n(int n)
{
	int i,res=0;
	for(i=1;i<=n;i++)
		res=res^i;
	return res;
}
void main()
{
	int n,res;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	res=XOR_1_to_n(n);
	printf("%d\n",res);
}
