// 5 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{ 
int m, n ,a, b, c;
printf("输入两个数字:\n");
scanf("%d%d", &a, &b);
m=a;   n=b;
while(b!=0)
{c=a%b; a=b;  b=c;}
printf("最小公约数是:%d\n", a);
printf("最大公倍数是:%d\n",m*n/a);
}