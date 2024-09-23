#define _CRT_SECURE_NO_WARNINGS 1
/* random.c */
#include<stdio.h>
#include<stdlib.h>
// #include<process.h>

int our_random_func(int max) {
	int x;
	x = rand() % max + 1;
	return x;
}
int main() {
	int random;
	srand(getpid());
	random = our_random_func(10);
	printf("%d\n", random);
	
	return 0;
}

