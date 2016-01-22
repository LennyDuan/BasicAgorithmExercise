#include<stdio.h>

int main() {

	int num;

	scanf("%d", &num);

	for (int i = 1; i < 100; i ++) {
		if (num / 10 != 0 ) {
			num = num / 10;
		} else {
			printf("Digit is : %d \n", i);
			break;
		}
	}
}
