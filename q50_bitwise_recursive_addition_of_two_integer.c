#include<stdio.h>
int add(int x,int y)
{
	int keep,res;
	keep=(x&y)<<1;
	res=x^y;
// If bitwise AND is 0, then there
    // is not going to be any carry.
    // Hence result of XOR is addition.
	
	if(keep==0)
		return res;
	add(keep,res);
}
void main()
{
	int n1,n2,r;
	printf("Enter the values\n");
	scanf("%d%d",&n1,&n2);
	r=add(n1,n2);
	printf("%d\n",r);
}

