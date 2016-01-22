#include<stdio.h>
#include<ctype.h>

int main()

{
		char word;
		int num = 0;

		while ((word = getchar()) != EOF)
		{
			if (isdigit(word)) {
				num += word - '0';
			} else if (word == '!' || word == '\n') {
					putchar('\n');
			} else {
					for (int i = 0; i < num; i++) {
							putchar(word == 'b' ? ' ': word);
					}
					num = 0;
			}
		}
		return 0;
}
