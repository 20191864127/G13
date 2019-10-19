#include<stdio.h>
int main ()
{
	float d,p,r,t,s,q,w,z,n,m;
	d=300000;
	p=6000;
	r=0.01;
	t=p-d*r;
	s=1+r;
	q=log10(t);
	w=log10(p);
	z=log10(s);
	n=w-q;
	m=n/z;
	printf("%f\n",m);
		return 0;
}


