// �ɼ�����.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
int main()

{
	char ID[100];
	char NAME[100];
	char MARK1[100];
	char MARK2[100];
	char MARK3[100];
	char MARK4[100];
	char MARK5[100];
	char MARK6[100];
	char MARK7[100];
	char MARK8[100];
	char MARK9[100];
	char MARK10[100];
	int a;
	int sum1=0;
	int sum2=0;
	int sum3=0;
	int sum4=0;
	int sum5=0;
	int sum6=0;
	int sum7=0;
	int sum8=0;
	int sum9=0;
	int sum10=0;

	printf ("��ѡ��Ҫִ�е�����\n"); 
	printf ("1-ѧ������¼��\n");
	printf ("2-�ɼ�¼�루����ѧ��˳��\n");
	printf ("3-����ƽ����/�ܷ�\n") ;
	printf ("4-�ɼ���ѯ\n");
	printf ("5-�ɼ�����\n");
	printf ("����Ҫִ�еĲ��������\n");
	scanf ("%d",&a);
	switch(a)
	{
		
		case 1:
		{
			int i=1;
			for (i=1;i<=100;i++)
			printf ("����ѧ��/n"); 
			scanf ("%d",&ID[i]); 
			printf ("��������/n");
			scanf ("%d",&NAME[i]);
			break;
		}
		
		
		case 2:
		{
			printf ("Ҫ�����ѧ���ǣ�/n");
			printf ("1-MARK1/n");
			printf ("2-MARK2/n");
			printf ("3-MARK3/n");
			printf ("4-MARK4/n");
			printf ("5-MARK5/n");
			printf ("6-MARK6/n");
			printf ("7-MARK7/n");
			printf ("8-MARK8/n");
			printf ("9-MARK9/n");
			printf ("10-MARK10/n");
			printf ("����Ҫ����ѧ�Ƶ����"); 
			int b;
			
			
			switch (b)
			{
				case 1:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK1[j]);
					break;
				}
				
				case 2:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK2[j]);
					break;
				}
				
				case 3:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK3[j]);
					break;
				}
				
				case 4:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK4[j]);
					break;
				}
				
				case 5:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK5[j]);
					break;
				}
				
				case 6:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK6[j]);
					break;
				}
				
				case 7:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK7[j]);
					break;
				}
				
				case 8:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK8[j]);
					break;
				}
				
				case 9:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK9[j]);
					break;
				}
				
				case 10:
				{
					int j=1;
					for (j=1;j<=100;j++)
					scanf ("%d",MARK10[j]);
					break;
				}
				
				default:printf("����/n");
			}
			break;
		}
		
		case 3:
		{
			printf("Ҫ���ƽ���ֵĿ�Ŀ�ǣ�/n");
			printf ("1-MARK1/n");
			printf ("2-MARK2/n");
			printf ("3-MARK3/n");
			printf ("4-MARK4/n");
			printf ("5-MARK5/n");
			printf ("6-MARK6/n");
			printf ("7-MARK7/n");
			printf ("8-MARK8/n");
			printf ("9-MARK9/n");
			printf ("10-MARK10/n");
			int c;
			scanf ("%d",&c);
			switch(c){
			case 1:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum1=sum1+MARK1[i];
				printf ("MARK1��ƽ�����ǣ�%d/n",(sum1/100));
				break;
			}
			
			case 2:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum2=sum2+MARK2[i];
				printf ("MARK2��ƽ�����ǣ�%d/n",(sum2/100));
				break;
			}
			
			case 3:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum3=sum3+MARK3[i];
				printf ("MARK3��ƽ�����ǣ�%d/n",(sum3/100));
				break;
			}
			
			case 4:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum4=sum4+MARK4[i];
				printf ("MARK4��ƽ�����ǣ�%d/n",(sum4/100));
				break;
			}
			
			case 5:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum5=sum5+MARK5[i];
				printf ("MARK5��ƽ�����ǣ�%d/n",(sum5/100));
				break;
			}
			
			case 6:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum6=sum6+MARK6[i];
				printf ("MARK6��ƽ�����ǣ�%d/n",(sum6/100));
				break;
			}
			
			case 7:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum7=sum7+MARK7[i];
				printf ("MARK7��ƽ�����ǣ�%d/n",(sum7/100));
				break;
			}
			
			case 8:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum8=sum8+MARK8[i];
				printf ("MARK8��ƽ�����ǣ�%d/n",(sum8/100));
				break;
			}
			
			case 9:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum9=sum9+MARK9[i];
				printf ("MARK9��ƽ�����ǣ�%d/n",(sum9/100));
				break;
			}
			
			case 10:
			{
				int i=1;
				for (i=1;i<=100;i++)
				sum10=sum10+MARK10[i];
				printf ("MARK10��ƽ�����ǣ�%d/n",(sum10/100));
				break;
			}
			break;
		}
	}
        
        case 4:
		{
			printf("������Ҫ��ѯ��ѧ����ѧ��/n");
        	int d;
        	scanf ("%d",&d);
        	printf ("MARK1   MARK2   MARK3   MARK4   MARK5   MARK6   MARK7   MARK8   MARK9   MARK10/n");
        	printf ("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",MARK1[d],MARK2[d],MARK3[d],MARK4[d],MARK5[d],MARK6[d],MARK7[d],MARK8[d],MARK9[d],MARK10[d]);
			break;
		}

        case 5:
		{
			
			break;
		}

    }
return 0;
}