#include<stdio.h>

int main() {

	int n ;
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int a = 0; a < 2 * (n  - i) - 1; a ++) {
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
