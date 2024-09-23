/* struct.c */
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<String.h>

struct person {
	char title[8];
	char lastName[32];
	int age;
};

int main() {
	struct person yair;

	strncpy(yair.title, "doctor", 7);
	strncpy(yair.lastName, "Babayov", 32);
	yair.age = 19;

	printf("%s %s of the age %d\n", 
		    yair.title, 
			yair.lastName, 
			yair.age);
	return 0;
}