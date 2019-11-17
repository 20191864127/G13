// 64.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
main()
{
    int i,num,a[11]={10,20,30,40,50,60,70,80,90,100};
    scanf("%d",&num);     
    printf("\n");
    for (i=9;i>=0;i--)
{
    if  (a[i] > num)
{
    a[i+1]=a[i];
    if(a[i==0]>num)
    {a[i]=num;}
}                         
    else
{
    a[i+1]=num;
    break;
}
} 
    for(i=0;i<11;i++)
    printf("%d ",a[i]);                
     
}//自己没写出来，借鉴了网上的资料