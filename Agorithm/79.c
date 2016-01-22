#include<stdio.h>

int foo = 100;

int set(int n) {
	int foo = 0;
	n = foo + n;
	return n;
}

int main() {
	int n = 100;
	printf("%d", set(n));
	return 0;
}
