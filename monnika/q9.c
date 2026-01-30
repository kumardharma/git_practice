#include<stdio.h>
void main()
{
	int i=8;
	printf("%d %d %d %d %d %d", i++,i--,++i,--i,i,++i);//unpredictable:- when we do inc and dec on same variable in one line it is unpredictable ex.(a=i-- + ++i - ++i + ++i)
}
