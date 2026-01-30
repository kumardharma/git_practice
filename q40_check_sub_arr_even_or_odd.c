#include<stdio.h>
void main()
{
	int arr[]={1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0},l,r;
	printf("Enter the value of l and r\n");
	scanf("%d%d",&l,&r);
	if(arr[r])
		printf("the sub array is odd\n");
	else
		printf("The entered sub array is r even\n");
}
