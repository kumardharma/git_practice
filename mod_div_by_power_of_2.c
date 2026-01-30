#include<stdio.h>
void main()
{
	int n=29,y=29,x,d=8,i,c;
	printf("(%d) % (%d)=%d\n",n,d,n&(d-1));//method1
	//now method2
	
	for(i=0;i<32;i++)
	{
		if((d>>i)&1)// d has only one set bi  
		{
			c=i+1;
			break;
		}
		 x=i;
	}
	for(i=c-1;i<32;i++)
		n=n&~(1<<i);
	printf("%d\n",n);
//////////////////method-3
	y=y<<(32-(x-1));
	y=y>>(32-(x-1));
	printf("%d\n",y);
}
