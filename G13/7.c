#include <stdio.h>
int main()
{
	float r,h,C,S1,S2,V1,V2;
	C=3.14*2*r;
	S1=r*r*3.14;
	S2=4*3.14*r*r;
	V1=(4/3)*3.14*r*r;
	V2=3.14*r*r*h;
	scanf("r=%f,h=%f",&r,&h);
	printf("圆周长: %f\n 圆面积: %f\n 圆球表面积: %f\n 圆球体积: %f\n 圆柱体积: %f\n",C,S1,S2,V1,V2);
	return 0;
}
