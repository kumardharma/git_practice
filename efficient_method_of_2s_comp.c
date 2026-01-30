#include<stdio.h>
#include<string.h>
char* find_2s_comp(char *s)
{
	int i,n;
	n=strlen(s);
	for(i=n-1;i>=0;i--)
	{
		if(s[i]=='1')
			break;
	}
	if(i==-1)
		return '1'+s;
	for(int k=i-1;k>=0;k--)
	{
		if(s[k]=='0')
			s[k]='1';
		else
			s[k]='0';
	}
	return s;
}
void main()
{
	char str[]="1000100",*c;
	c=find_2s_comp(str);
	printf("%s\n",c);
}
