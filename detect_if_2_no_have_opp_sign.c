#include<stdio.h>
int check_sign(int x,int y)
{
	return (x^y);
}
void main()
{
	int x,y,z;
	printf("Enter the value of x and y\n");
	scanf("%d %d",&x,&y);
	z=check_sign(x,y);
	if(z<0)
		printf("Both numbers have opposite sign\n");
	else
		printf("both numbers have same sign\n");
}











/*void main()
{
	int x=100,y=-50;
	if((x^y)<0)
		printf("both numbers have opposite sign\n");
	else
		printf("Both numbers have same sign\n");
}*/
