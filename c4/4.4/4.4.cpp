#include <stdio.h>
int main()
{
int a,b,c;
printf("Please enter three integers:");
scanf("%d,%d,%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("The biggest word is %d\n",a);
	else if(b>a&&b>c)
		printf("The biggest word is %d\n",b);
		else if (c>a&&c>b)
	printf("The biggest word is %d\n",c);
	return 0;
} 