#include<stdio.h>
void main()

{
	int a[5]={5,1,15,20,25};
	int i=0,j,k=1,m;
	i=++a[i];//++a[0]=i=6 pre inc
	j=a[1]++;//j=1 post inc
	i=4;
	m=a[i++];//m=25 post inc on i so m=a[4] then i=5
	printf("%d %d %d \n",i,j,m);

}
