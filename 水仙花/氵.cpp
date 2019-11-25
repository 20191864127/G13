// уп.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	void print_a();
	void print_b();
	void print_c();
	void print_d();
	void print_e();
	void print_f();
	void print_g();
	print_a();
	print_b();
	print_c();
	print_d();
	print_e();
	print_f();
	print_g();
	return 0;
}
void print_a()
{
	int n,a,b,c;
	for(n=100;n<1000;n++)
	{
		a=n/100;
		b=(n-a*100)/10;
		c=n-a*100-b*10;
		if(n==a*a*a+b*b*b+c*c*c)
			printf("%d ",n);
	}
	printf("\n");
}
void print_b()
{
	int n,a,b,c,d;
	for(n=1000;n<10000;n++)
	{
		a=n/1000;
		b=(n-a*1000)/100;
		c=(n-a*1000-b*100)/10;
		d=n-a*1000-b*100-c*10;
	if(n==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d)
		printf("%d ",n);
	}
	printf("\n");
}
void print_c()
{
	int n,a,b,c,d,e;
	for(n=10000;n<100000;n++)
	{
		a=n/10000;
		b=(n-a*10000)/1000;
		c=(n-a*10000-b*1000)/100;
		d=(n-a*10000-b*1000-c*100)/10;
		e=n-a*10000-b*1000-c*100-d*10;
		if(n==a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e)
			printf("%d ",n);
	}
	printf("\n");
}
void print_d()
{
	int n,a,b,c,d,e,f;
	for(n=100000;n<1000000;n++)
	{
		a=n/100000;
		b=(n-a*100000)/10000;
		c=(n-a*100000-b*10000)/1000;
		d=(n-a*100000-b*10000-c*1000)/100;
		e=(n-a*100000-b*10000-c*1000-d*100)/10;
		f=n-a*100000-b*10000-c*1000-d*100-e*10;
		if(n==a*a*a*a*a*a+b*b*b*b*b*b+c*c*c*c*c*c+d*d*d*d*d*d+e*e*e*e*e*e+f*f*f*f*f*f)
			printf("%d ",n);
	}
	printf("\n");
}
void print_e()
{
	int n,a,b,c,d,e,f,g;
	for(n=1000000;n<10000000;n++)
	{
		a=n/1000000;
		b=(n-a*1000000)/100000;
		c=(n-a*1000000-b*100000)/10000;
		d=(n-a*1000000-b*100000-c*10000)/1000;
		e=(n-a*1000000-b*100000-c*10000-d*1000)/100;
		f=(n-a*1000000-b*100000-c*10000-d*1000-e*100)/10;
		g=n-a*1000000-b*100000-c*10000-d*1000-e*100-f*10;
		if(n==a*a*a*a*a*a*a+b*b*b*b*b*b*b+c*c*c*c*c*c*c+d*d*d*d*d*d*d+e*e*e*e*e*e*e+f*f*f*f*f*f*f+g*g*g*g*g*g*g)
			printf("%d ",n);
	}
	printf("\n");
}
void print_f()
{
	int n,a,b,c,d,e,f,g,h;
	for(n=10000000;n<100000000;n++)
	{
		a=n/10000000;
		b=(n-a*10000000)/1000000;
		c=(n-a*10000000-b*1000000)/100000;
		d=(n-a*10000000-b*1000000-c*100000)/10000;
		e=(n-a*10000000-b*1000000-c*100000-d*10000)/1000;
		f=(n-a*10000000-b*1000000-c*100000-d*10000-e*1000)/100;
		g=(n-a*10000000-b*1000000-c*100000-d*10000-e*1000-f*100)/10;
		h=n-a*10000000-b*1000000-c*100000-d*10000-e*1000-f*100-g*10;
		if(n==a*a*a*a*a*a*a*a+b*b*b*b*b*b*b*b+c*c*c*c*c*c*c*c+d*d*d*d*d*d*d*d+e*e*e*e*e*e*e*e+f*f*f*f*f*f*f*f+g*g*g*g*g*g*g*g+h*h*h*h*h*h*h*h)
			printf("%d ",n);
	}
	printf("\n");
}
void print_g()
{
	int n,a,b,c,d,e,f,g,h,i;
	for(n=100000000;n<1000000000;n++)
	{
		a=n/100000000;
		b=(n-a*100000000)/10000000;
		c=(n-a*100000000-b*10000000)/1000000;
		d=(n-a*100000000-b*10000000-c*1000000)/100000;
		e=(n-a*100000000-b*10000000-c*1000000-d*100000)/10000;
		f=(n-a*100000000-b*10000000-c*1000000-d*100000-e*10000)/1000;
		g=(n-a*100000000-b*10000000-c*1000000-d*100000-e*10000-f*1000)/100;
		h=(n-a*100000000-b*10000000-c*1000000-d*100000-e*10000-f*1000-g*100)/10;
		i=n-a*100000000-b*10000000-c*1000000-d*100000-e*10000-f*1000-g*100-h*10;
		if(n==a*a*a*a*a*a*a*a*a+b*b*b*b*b*b*b*b*b+c*c*c*c*c*c*c*c*c+d*d*d*d*d*d*d*d*d+e*e*e*e*e*e*e*e*e+f*f*f*f*f*f*f*f*f+g*g*g*g*g*g*g*g*g+h*h*h*h*h*h*h*h*h+i*i*i*i*i*i*i*i*i)
			printf("%d ",n);
	}
	printf("\n");
}

