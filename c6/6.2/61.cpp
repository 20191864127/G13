// 61.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
void main()
{
	int i,j;
	int num = 0;
	int a[100];
	for(i = 1;i <= 100;++i)
	{
		a[i]=i;
	}
	for(i = 2;i <= 10;++i)
	{
		for(j = i;j <= 100;j++)
		{
			if(a[j]%i==0)
				a[j]=0;
		}
	}
	printf("100以内素数有：");
	for(i = 2;i <= 100;++i)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
			num++;
		}
	}
	printf("\n");
	printf("100以内素数的个数为：%d\n",num);
}