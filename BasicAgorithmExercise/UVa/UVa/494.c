#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
		char str[10000];

		while (gets(str)) {
				int words = 0;

				for (int i = 0; i < strlen(str); i++) {
						if ( isalpha(str[i]) && ( !isalpha(str[i - 1])))
						words++;
				}
				printf("%d \n", words);
		}

		return 0;
}	

						
		

		

