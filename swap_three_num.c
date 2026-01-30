#include<stdio.h>
void main()
{
	int a=10,b=20,c=30;

	a=a+b+c;//a=60
	b=a-(b+c);//b=60-50=>b=10
	c=a-(b+c);//c=60-(10+30),c=20
	a=a-(b+c);//60-(10+20),a=30;
	printf("a=%d b=%d c=%d\n",a,b,c);



	a=a^b^c;
	b=a^b^c;
	c=a^b^c;
	a=a^b^c;
	printf("a=%d b=%d c=%d\n",a,b,c);

}
