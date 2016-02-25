#include<stdio.h>

int addDigits(int num) {
	if (num == 0) return 0;
	return (num % 9 == 0) ? 9 : num % 9;
}

int main() {
	int a;
	while(getchar()) {
		scanf("%d", &a);
		printf("%d\n", addDigits(a));
	}
	return 0;
}

