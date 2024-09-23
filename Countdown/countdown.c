/* countdown.c */

#include<stdio.h>
#include<Windows.h>

int main() {
	int number;
	number = 6;
	while (number >= 0) {
		number -= 1;
		if (number == 3)
			continue;
		if (number == 0)
			break;
		printf("%d\n", number);
		Sleep(1000);
	}
	return 0;
}