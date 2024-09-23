/* pointers.c */
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<String.h>
int main(){
	char str[32];
	char* p;
	strncpy(str, "I love rock and roll", 31);
	p = str;
	printf("%s", p + 3);
	return 0;
}