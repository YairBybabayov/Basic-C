#define _CRT_SECURE_NO_WARNINGS 1
/* float.c */
#include<stdio.h>

int main() {
	float pie, r, area;
	pie = 3.14;
	printf("Enter Radius\n");
	scanf("%f", &r);
	area = r * r * pie;
	printf("Area is %f\n", area);

	return 0;
}