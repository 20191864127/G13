// 5 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{ 
int m, n ,a, b, c;
printf("������������:\n");
scanf("%d%d", &a, &b);
m=a;   n=b;
while(b!=0)
{c=a%b; a=b;  b=c;}
printf("��С��Լ����:%d\n", a);
printf("��󹫱�����:%d\n",m*n/a);
}