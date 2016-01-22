#include<stdio.h>

int is_prime(int x) {
	int i ;
	for (i = 2; i * i <= x; i ++) {
		if (x % i == 0) return 0;
	}

	return i;
}

int main() {

	int m;
	scanf("%d", &m);
	for (int i = m - 2; i < m; i ++) {
		if (is_prime(i) && is_prime(i + 2)){
			printf("%d %d", i, i + 2);
		}
	}

	return 0;
}


