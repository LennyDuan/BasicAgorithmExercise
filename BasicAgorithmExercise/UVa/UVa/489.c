#include<stdio.h>
#include<stdbool.h>
#include<string.h>


char guess[100];
char question[100];
int num;
bool win = false;
bool lose = false;

int main()
{

		int round_num;

		for (round_num = 1; ;round_num++ ) {

				printf("Round %d \n", round_num);
				
				scanf("%s", question);
				scanf("%s", guess);
			
//				printf(" %s, %s \n", question, guess);

				num = 7;
				int word = strlen(question);

				for (int i = 0; i < strlen(guess); i ++) {
//						printf("%c \n", guess[i]);
						num --;
						if (num < 0) {
								lose = true;						

//						} else if (num == 0) {
//								printf("You chickened out \n \n");								

						} else {
								for (int j = 0; j < strlen(question); j++) {
										if (question[j] == guess[i]) {
												word --;
												if (word == 0) {
														win = true;
												}
										}
								}
						}
				}	

				if ((win == false && lose == false) || (win == false && num == 0)) {
						printf("You chickened out \n \n");
				} else if (lose == true) {
						printf("You lose \n \n");
						lose = false;
				} else if (win == true) {
						printf("You win \n \n");
						win = false;
				}

		}
		return 0;
}
