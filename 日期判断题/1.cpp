// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int year,month,day,a,num;
		printf("enter year and month and day:\n");
		scanf("%d%d%d",&year,&month,&day);
		if((month>12)||(month==1&&day>31)||(month==2&&day>29)||
			(month==3&&day>31)||(month==4&&day>30)||(month==5&&day>31)||
			(month==6&&day>30)||(month==7&&day>31)||(month==8&&day>31)||
			(month==9&&day>30)||(month==10&&day>31)||(month==11&&day>30)||
			(month==12&&day>31)||(month<1)||(day<1)||(year<1))
		{
			printf("error\n");
			
		}else{
		if((year%4==0&&year%100!=0)||(year%400==0))
		{
			a=29;
		}
		else
		{
			a=28;
		}
		switch(month)
		{
			case 1:num=0;break;
			case 2:num=31;break;
			case 3:num=31+a;break;
			case 4:num=31+a+31;break;
			case 5:num=31+a+31+30;break;
			case 6:num=31+a+31+30+31;break;
			case 7:num=31+a+31+30+31+30;break;
			case 8:num=31+a+31+30+31+30+31;break;
			case 9:num=31+a+31+30+31+30+31+31;break;
			case 10:num=31+a+31+30+31+30+31+31+30;break;
			case 11:num=31+a+31+30+31+30+31+31+30+31;break;
			case 12:num=31+a+31+30+31+30+31+31+30+31+30;break;
		}
		num=num+day;
		printf("the day is %d\n",num);}
	return 0;
}


