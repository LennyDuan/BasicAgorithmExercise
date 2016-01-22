#include <stdio.h>

int main()
{
		int deck;

		puts("Enter a number \n");
		scanf("%i",&deck);
		
		if(deck<10){
				puts("The decks is not enough \n");
				return 1;
		}

		printf("The number of decks are %d", deck*2);
		return 0;
}


