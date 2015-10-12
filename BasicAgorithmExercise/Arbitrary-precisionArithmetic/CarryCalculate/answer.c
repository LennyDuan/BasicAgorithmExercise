#include<stdio.h>

int main() 
{

	int a, b;

	while(scanf("%d %d", &a, &b) == 2) {
		if ((!a && !b )|| (a == 0 && b ==0)) {
			break;
		}

		int num = 0;
		int c = 0;
		for (int i = 0; i < 9; i ++) {

			c = (a % 10 + b % 10 + c) > 9 ? 1 : 0;
			num += c;
			a /= 10;
			b /= 10;
		}

		printf("%d\n", num);
	}

	return 0;
}
