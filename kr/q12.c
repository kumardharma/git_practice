#include<stdio.h>
unsigned long int(*function())
{
	static unsigned int arr[5]={2,3,5,7,11};
	printf("%d",*arr);
	printf("add at %d is %u\n",*arr, arr);
	printf("add at %d is %u\n",*(arr+1), arr+1);
	printf("add at %d is %u\n",*(arr+2), arr+2);
	printf("add at %d is %u\n",*(arr+3), arr+3);
	printf("add at %d is %u\n",*(arr+4), arr+4);
	return &arr;

}
void main()
{
	unsigned long int(*ptr)[5];
	ptr=function();
	printf(" %u\n",*(*ptr+4));
	printf("add at %ld is %u\n",*(*ptr+4), (*ptr+4));
}

