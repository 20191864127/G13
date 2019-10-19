#include<stdio.h>
int main ()
{
	float r1,n,P1,r2,n2,r3,n3,P2,P3,P4,P5,t,q,z,P6,e,w,r,P;
	r1=0.03;
		n=5;
		P1=1000*(1+n*r1);
		r2=0.021;
		n2=2;
		r3=0.0275;
		n3=3;
		P2=1000*(1+n2*r2);
		P3=P2*(1+n3*r3);
		P4=1000*(1+n3*r3);
		P5=P4*(1+n2*r2);
		z=0.015;
		t=1+z;
		q=pow(t,n);
		P6=1000*q;
		r=0.0035;
		e=1+r/4;
		w=pow(e,4*n);
		P=1000*e;
		printf("一次存五年: %f\n 先存两年再存三年: %f\n 先存三年再存五年: %f\n 存一年连存五次: %f\n 活期存款: %f\n",P1,P3,P5,P6,P);
		return 0;
}










