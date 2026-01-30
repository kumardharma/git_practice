#include<stdio.h>
void main()
{
	char names[5][20]={"pascal","ada","cobol","fortran","perl"};
	int i;
	char *t;
	t=names[3];
	names[3]=names[4];
	names[4]=t;
	for(i=0;i<4;i++)
		printf("%s\n",names[i]);
}//assignment to expression with array type
    //  names[3]=names[4]
