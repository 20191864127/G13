#include<stdio.h>
int main()
{
	int I,p;
	printf("Please enter I:");
	scanf("%d",&I);
		if(I>=0&&I<=100000)
		{
			p=I+I*0.1;
		printf("The prize is%d\n",p);
		}
		else
		
			if(I>100000&&I<=200000)
				{p=I+I*0.075;
				printf("The prize is%d\n",p);
		}
				else
					if(I>200000&&I<=400000)
					{
						p=I+200000*0.075+(I-200000)*0.05;
						printf("The prize is%d\n",p);
					}
						else
							if(I>400000&&I<=600000)
							{
								p=I+200000*0.075+(400000-200000)*0.05+(I-400000)*0.03;
							printf("The prize is%d\n",p);
							}
							else
								if(I>600000&&I<=1000000)
								{
									p=I+200000*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(I-600000)*0.015;
									printf("The prize is%d\n",p);
								}
									else
										if(I>1000000)
										{
											p=I+200000*0.075+(400000-200000)*0.05+(600000-400000)*0.03+(1000000-600000)*0.015+(I-1000000)*0.01;
												printf("The prize is%d\n",p);
										}
												return 0;
}


