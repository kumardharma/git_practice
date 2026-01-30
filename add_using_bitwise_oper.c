//addition of two no without using arithmetic operators
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter bvalue of a and b\n");
	scanf("%d %d",&a,&b);
	while(b)
	{
		c=a&b;//got where we to use carry
		a=a^b;//doing actual addition
		for(int i=0;i<32;i++)
		{
			if(b&(1<<i))//checking ech bit of B and applying the carry 
				b=(c<<1);
		}
	}
	printf("sum is %d\n",a);
}
