// rps.c
// Rock-paperpscissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand()

// 상수 변수 정의
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// 상수 함수 정의
#define WIN printf("YOU WIN!!!!!!\n")
#define LOSE printf("you lose ㅠㅠ\n")
#define TIE printf("It's a tie~~~\n")

// 함수 원형 선언
void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void)
{
	int user_choice, comp_choice;

	// 랜던 숫자 생성
	srand(time(0));

	printf("Welcome to RPS!\n");
	printf("Choose your move : \n");
	printf("1 - Rock\n");
	printf("2 - PAPER\n");
	printf("3 - SCISSORS\n");

	// 사용자의 선택 받기
	printf("Choice : >>> ");
	scanf_s("%d", &user_choice);

	//AI의 선택 받기
	comp_choice = (rand() % 3) + 1; // 0 ~ 2 + 1

	// 선택 출력하기
	printf("Your choice : ");
	print_choice(user_choice);
	printf("AI choice : ");
	print_choice(user_choice);

	play_game(user_choice, comp_choice);

	return 0;
}

// 함수 정의
void play_game(int user_choice, int comp_choice)
{
	if (user_choice == comp_choice) {
		TIE; //printf("It's a tie~~~");
	}
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {
		WIN;
	}
	else {
		LOSE;
	}
}

void print_choice(int choice)
{
	if (choice == ROCK) { //choice == 1
		printf("Rock\n");
	}
	else if (choice == PAPER) { // choice == 2
		printf("Paper\n");
	}
	else if (choice == SCISSORS) { // choice == 3
		printf("Scissors\n");
	}
	else
	{
		printf("Error : Incorrent choice!!");
	}
}