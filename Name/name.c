/* name.c */
#include<stdio.h>

int main() {
	char name[12];
	printf("Enter your name\n");
	scanf("%s", &name);
	printf("Your name is %s\n", name);

	return 0;
}