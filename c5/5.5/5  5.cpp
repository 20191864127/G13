// 5  5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main() 
{
    
	int a=2,sum=0,n,i;
	printf("�������ֵ�λ��:\n");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
    sum=sum+a;
	a=(a*10+2);
	} 
    printf("%d",sum);
	return 0;
}


