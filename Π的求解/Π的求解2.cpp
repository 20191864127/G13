// Π的求解2.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
int main()
{
	int zi=1;
	double a=1.0,sum=0.0,mu=1.0,pi=0.0;
	while(fabs(a)>=1e-6)
	{
		sum=sum+a;
		zi=-zi;
		mu=mu+2;
		a=zi/mu;
	}
	pi=sum*4;
	printf("pi的近似值是:%f\n",pi);
	return 0;
}
