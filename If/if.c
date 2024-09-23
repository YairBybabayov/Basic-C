#define _CRT_SECURE_NO_WARNINGS 1
/* if.c */
#include<stdio.h>

int main() {
	int speed;
	printf("What is your speed?\n");
	scanf("%d", &speed);
	if (speed > 100) {
		printf("You are driving too fast\n");
	}
	else {
		printf("OK\n");
	}

	return 0;
}