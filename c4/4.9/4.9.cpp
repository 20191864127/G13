#include<stdio.h>
int main()
{
	int num;
		printf("Please enter an integer:");
scanf("%d",&num);
		if(num>9999&&num<99999)
			printf("n=5\n");
		else 
			if(num>999&&num<=9999)
			printf("n=4\n");
	else
		if(num>99&&num<=999)
			printf("n=3\n");
	else
		if(num>9&&num<=99)
			printf("n=2\n");
	else
			printf("n=1\n");

	{ int a,b,c,d,e,f;
		a=num/10000;
		printf("%d\n",a);
			b=(num-a*10000)/1000;
			printf("%d\n",b);
				c=(num-b*1000-a*10000)/100;
				printf("%d\n",c);
					d=(num-b*1000-a*10000-c*100)/10;
					printf("%d\n",d);
						e=(num-b*1000-a*10000-c*100-d*10);
						printf("%d\n",e);
		if(num>9999&&num<99999)
			printf("%d%d%d%d%d\n",e,d,c,b,a);
		else 
			if (num>999&&num<=9999)
			printf("%d%d%d%d\n",e,d,c,b);
		else
		if(num>99&&num<=999)
		printf("%d%d%d%d\n",e,d,c);
			else
		if(num>9&&num<=99)
				printf("%d%d%d%d\n",e,d);
	else
			printf("%d\n,e");

}

							
return 0;
}