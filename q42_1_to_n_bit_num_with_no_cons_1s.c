#include<stdio.h>
void main()
{
	int n,i=0,j;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	while(i<(1<<n))//for 4 bits it should check 2 raised to pow 4 times
	{	
		for(j=0;j<n;j++)//check n bits
			{
				if(((((i>>j)&1)==1)&&(((i>>(j+1))&1))))
					{
						printf("%d ",i);
						break;
					}
				else
					break;


			}
		i++;
	}
}
