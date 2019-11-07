#include<stdio.h>
int main()
{
	int I,P,p1,p2,p4,p6,p10,pn;
	printf("Please enter I:");
	scanf("%d",&I);
	P=I/100000;
	switch(P)
	{
	case 1:	printf("%d\n",p1=I+I*0.1);break;
	case 2:
	case 3:printf("%d\n",p2=I+(I-100000)*0.075);break;
	case 4:
	case 5:printf("%d\n",p4=I+200000*0.075+(I-200000)*0.05);break;
	case 6:
	case 7:	
	case 8:
	case 9:printf("%d\n",p6=I+200000*0.075+(400000-200000)*0.05+(I-400000)*0.03);break;
	case 10:printf("%d\n",p10=I+200000*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(I-600000)*0.015);break;
	default:printf("%d\n",pn=I+200000*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(1000000-600000)*0.015+(I-1000000)*0.01);
	}
	return 0;
}

