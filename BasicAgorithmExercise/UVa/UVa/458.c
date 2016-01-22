#include<stdio.h>

int main()
{

		char a;

		while ((a = getchar()) != EOF) {
				putchar( a == '\n' ? a : a + '*' - '1');
		}

		return 0;
}
