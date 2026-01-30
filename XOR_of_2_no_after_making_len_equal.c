#include<stdio.h>
int count_no(int);
int XOR_equal_len(int a,int b)
{
	if(count_no(a)<count_no(b))
	{
		a=a<<(count_no(b)-count_no(a));
		return a^b;
	}
	else
	{
		b=b<<(count_no(a)-count_no(b));
		return a^b;
	}
}
void main()
{
	int a,b,res;
	printf("enter the vslue of a and b\n");
	scanf("%d%d",&a,&b);
	res=XOR_equal_len(a,b);
	printf("%d\n",res);

}
int count_no(int n)
{//counting no of bits
        int c=0;
        {
                if(n>>1)
                        c++;
        }
        return c;
}

