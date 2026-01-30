//change the value of bits and see the o/p;
#include<stdio.h>
int flip_bits(char *a,char *b,char *c,int N)
{
	int i,count=0;
	for(i=0;i<N;i++)
	{
		if((a[i]==b[i]) && (c[i]=='1'))
			++count;
		else if((a[i]!=b[i]) && (c[i]=='0'))
			++count;
	}
	return count;
}
void  main()
{
	int N=5,res;//N -no of bits
	char a[]="10100";
	char b[]="00010";
	char c[]="11100";
	res=flip_bits(a,b,c,N);
	printf("Minimum number of bits to be flipped in A or B to equal c is: %d\n",res);

}
