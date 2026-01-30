#include<stdio.h>
int check_sign(int n)
{
	return 1+(n>>31)-(-n>>31);
}
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(check_sign(n)==0)
		printf("The given number is negative\n");
	else if(check_sign(n)==2)
		printf("The given number is positive\n");
	else//returns 1 for zero
		printf("The given number is zero\n");
}
