#include<stdio.h>
void print_binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf("\n");
}
void main()
{
	/*int a=229,b=243,c=0;
	int i;
	for(i=0;i<32;i++)
		if(((a>>i)&1)!=((b>>i)&1))
			c++;
	print_binary(a);
	print_binary(b);
	printf("No of bits to be flipped to convert A to B is: %d \n",c);*/ 
	//method 2
	

	int a=7, b=12,c=0,d,i;
	print_binary(a);
	print_binary(b);
	d=a^b;
	for(i=0;i<32;i++)
		if((d>>i)&1)
			c++;
	printf("No of bits to be flipped to convert a to b is: %d\n",c);



}
