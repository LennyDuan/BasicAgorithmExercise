#include<stdio.h>

int main()
{
		int f, hz;

		scanf("%d %d", &f, &hz);

		for (int a = 0; a < hz; a ++) {

				for (int b = 0; b <= f; b++){

						int d = b;
						for (int c = 0; c < b; c++) {

								printf("%d", d );
								
						}

				putchar('\n');
				}

				for (int  b = f-1; b >= 1; b --) {

						int d = b;
						for (int c = 0; c < b ; c++) {

							printf("%d", d );
						
						}	
						
				putchar('\n');
				}

				putchar('\n');
		}

		return 0;
}



