#include<stdio.h>
void main()
{
	const int ary[4]={1,2,3,4};
	int *p;
	p=ary+3;
	*p=5;// ary[] is const but we can change using pointer, compiler ignores const
	printf("%d\n",ary[3]);
	//ary[3]=6; error assign to read only
	//printf("%d\n",ary[3]);
	
}
