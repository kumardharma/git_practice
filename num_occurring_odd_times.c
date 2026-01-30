#include<stdio.h>
int num_occur_odd_times(int *a,int size)
{
	int res=0,i;
	for(i=0;i<size;i++)
		res=res^a[i];
	return res;
}
void main()
{
	int arr[]={1,2,3,2,4,3,1,7,8,7,8},arr_size;
	arr_size=sizeof(arr)/sizeof(arr[0]);
	printf("number occurring odd number of times is : %d\n",num_occur_odd_times(arr,arr_size));
}
