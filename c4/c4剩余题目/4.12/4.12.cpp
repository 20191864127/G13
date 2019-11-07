#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,m,n;
	printf("ÇëÊäÈë×ø±ê:");
		scanf("%f,%f",&x,&y);
		m=sqrt((2*2)+(2*2));
		n=sqrt((x*x)+(y*y));
		if (m>n)
			if ((m-n)>1)
				printf("The height is 0m.\n");
			else
				if((m-n)<=1)
				printf("The height is 10m.\n");
		if (m<n)
			if ((n-m)>1)
				printf("The height is 0m.\n");
			else
				if((n-m)<=1)
				printf("The height is 10m.\n");
				return 0;
}
