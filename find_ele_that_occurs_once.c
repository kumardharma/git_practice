//FIND THE ELEMENT THAT OCCURS ONLY ONCE
#include<stdio.h>
void print_binary(unsigned int flag, int i, int j)
{
	printf("at the iteration i=%d and j=%d\n", i, j);

	for(i=31; i>=0; i--)
	{
		printf("%d ", flag&(1<<i));
	}
}

unsigned int getsingle(unsigned int *arr,int n)
{
	unsigned int sum=0,x,i,j,flag;
	unsigned int result=0;
	for(i=0;i<32;i++)
	{
		sum=0;
		x=(1<<i);
		for(j=0;j<n;j++)
		{
			flag=arr[j]&x;
			if(flag)//it gives i'th bit of a[j] element if it is 1 then sum++
				sum++;
			print_binary(flag, i, j);
			printf("\n");
		}
		if((sum%3)!=0)
			result=result|x;
		printf("result is %d\n", result);
	}
	return result;
}
void main()
{
	unsigned int arr[]={3,2,3,3,2,2,4}, n;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Element that occurs once is: %d\n",getsingle(arr,n));
}

