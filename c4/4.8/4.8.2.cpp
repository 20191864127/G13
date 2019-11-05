#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("Your score:");
	if (a>=90)
		printf("Your grade is=A.\n");
else if (a>=80&&a<=89)
		printf("Your grade is=B.\n");
else if (a>=70&&a<=79)
		printf("Your grade is=C.\n");
else if (a>=60&&a<=69)
		printf("Your grade is=D.\n");
else if (a<60)
		printf("Your grade is=E.\n");
return 0;
}