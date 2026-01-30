#include<stdio.h>
int set_middle_bits(int n)
{//first set all bit
	n|=n>>1;
	n|=n>>2;
	n|=n>>4;
	n|=n>>8;
	n|=n>>16;

	return (n>>1)^1;//return middle set bits...1st and last is unset
}

int toggle_middle_bits(int n)
{//toggle all bits except 1st and last
	if(n==1)
		return 1;
	
	return n^set_middle_bits(n);
}
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("%d\n",toggle_middle_bits(n));
}
