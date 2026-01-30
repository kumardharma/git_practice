#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(((n>>3)<<3)==n)
		printf("Divisible by 8\n");
	else
		printf("Not divisible  by 8\n");

}
