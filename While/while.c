#define _CRT_SECURE_NO_WARNINGS 1
/* while.c */
#include<stdio.h>

int main() {
	int x;
	x = 0;
	while (x == 0) {
		printf("do you wonna quit? press 1\n");
		scanf("%d", &x);
	}

	return 0;
}