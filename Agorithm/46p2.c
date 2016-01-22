#include<stdio.h>

int main() {


	for (int i = 100; i < 1000;i ++) {
		int a, b, c;
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10 ;
		if (i == (a*a*a + b*b*b + c*c*c)) {
			printf("%d\n", i);
		}
		else continue;
	}

	return 0 ;
}
