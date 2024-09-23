#define _CRT_SECURE_NO_WARNINGS 1
/* numbers.c */
#include<stdio.h>

int main() {
	int x, y, answer;
	printf("select a number\n");
	scanf("%d", &x);
	printf("select another number\n");
	scanf("%d", &y);
	answer = x + y;
	printf("sum equals to %d\n",answer);

	return 0;
}