#define _CRT_SECURE_NO_WARNINGS 1
/* triangle.c */
#include<stdio.h>
int triangle_area(int base, int height) {
	return (base * height / 2);
}
int main() {
	int base, height, area;
	printf("Base: ");
	fflush(stdout);
	scanf("%d", &base);

	printf("Height: ");
	fflush(stdout);
	scanf("%d", &height);

	area = triangle_area(base, height);

	printf("Area: %d", area);
	return 0;
}

