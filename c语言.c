#include<stdio.h>
#include<string.h>
int strcmp1(char *p1,char *p2)
{
	while(*p1&&*p2&&(*p1==*p2))
	{
		p1++;
		p2++;
	}
	return *p1-*p2;
}
int main()
{
	char s[]={"wanghaiyun"},z[]={"pengwanjia"};
	printf("%d",strcmp1(s,z));
	
}
