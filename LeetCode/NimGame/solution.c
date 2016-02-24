#include<stdio.h>
#include<stdbool.h>

bool win(int n){
	return n % 4;
}
int main() {
	while(getchar()) {
		int a;
		scanf("%d", &a);
		printf(win(a) ? "Win\n" : "false\n");
	}
	return 0;
}
