#include<stdio.h>
int 	count_set_bit(int n)
{
	int c=0;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}
int sum_num_with_2_set_bit(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(count_set_bit(i)==2)
			sum=sum+i;
	}
	return sum;
}
void main()
{
	int n,res;
	printf("Enter the number \n");
	scanf("%d",&n);
	res=sum_num_with_2_set_bit(n);
	printf("%d\n",res);
}
