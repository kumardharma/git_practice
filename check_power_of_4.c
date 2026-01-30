#include<stdio.h>
int main()
{
	int a=64,c=0;
	scanf("%d", &a);
	if((a&(a-1))==0)//checking if there is only one set bit
	{
		for(int i=1;i<32/2;i++)
		{
			if(a&(1<<(i*2))) //if(a&(1<<i)==0) -> count++;
			{
				printf("it is a power of 4\n");
				return 0;
			}
		}
		printf("it is not a power of 4\n");
	}
	else
		printf("it is not a power of 4\n");
	return 0;
		
}
