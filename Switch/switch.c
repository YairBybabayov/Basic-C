/* switch.c */
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int x;
	printf("Choose between 1. apples, 2. pears, 3. bananas\n");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("apples\n");
		break;
	case 2:
		printf("pears\n");
		break; 
	case 3:
		printf("bananas\n");
		break;
	default:
		printf("something else\n");
		break;
	}

	return 0;
}