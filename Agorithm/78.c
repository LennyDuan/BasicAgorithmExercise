#include<stdio.h>

int f(int x) {
	return x == 1 ? 1 : f(x - 1) * x ;
}

int main() {
	int a ;
	scanf("%d",  &a);
	printf("%d \n", f(a));

	return 0;
}

