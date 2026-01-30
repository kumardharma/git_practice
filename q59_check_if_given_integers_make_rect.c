#include<stdio.h>
#include<stdbool.h>
bool check_rect(int a,int b,int c,int d)
{
	if(a==b==c==d)//square
		return true;
	else if(a==b&&c==d)
		return true;
	else if(a==c&&b==d)
		return true;
	else if(a==d&&b==c)
		return true;
	else
		return false;
}
void main()
{
	int a,b,c,d;
	printf("ENter the length of sides\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(check_rect(a,b,c,d))
		printf("YES\n");
	else
		printf("NO");
}
