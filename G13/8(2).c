#include<stdio.h>
int main()
{
	char c1,c2;
	c1=getchar();
	c1=c1+32;
	c2=getchar();
	c2=c2+32;
	printf("c1: %c c2: %c",c1,c2);
	return 0;
}
