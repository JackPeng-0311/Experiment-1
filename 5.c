#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(){
	float r = 0;
	scanf("%f",&r);
	float c = 0;
	float s = 0;
	float v = 0;
	c = 2*PI*r;
	s = 4*PI*r*r;
	v = (4*PI*r*r*r)/3;
	printf("周长为：%.2f",c);
	printf("表面积为：%.2f",s);
	printf("体积为：%.2e",v);
}

