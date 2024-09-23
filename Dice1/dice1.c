/* dice1.c */
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
// random function to simulate the dice
int random_func() {
	return rand() % 6 + 1;
}
int main() {
	int balance = 1000; // the initial amount of money the player get
	int bet, guess, dice;

	// initializing the bet amount
	printf("How much money do you want to put in? ");
	fflush(stdout);
	scanf("%d", &bet);

	// initializing the guess
	printf("Pick anumber from 1-6: ");
	printf("Press 0 to quit\n");
	fflush(stdout); // flushing the buffer to make it look better
	scanf("%d", &guess);

	while (guess != 0) {
		Sleep(2000); // pausing for 2 sec 
		srand(getpid()); // using the PID to get a random effect
		dice = random_func(); // using the random func
		
		// checking the result
		if (guess == dice) { // match
			printf("Correct\n");
			balance += 3 * bet;
			printf("Your balance is %d\n", balance);
		}
		else { // doesn't match
			printf("Wrong\n");
			balance -= bet;
			if (balance <= 0) {
				printf("You lost\n", balance);
				break;
			}
			printf("Your balance is %d\n", balance);
		}

		// keep going... 
		printf("Pick anumber from 1-6:\n");
		printf("Press 0 to quit\n");
		fflush(stdout);
		scanf("%d", &guess);
	}
	
	printf("Game Over\n");

	return 0;
}