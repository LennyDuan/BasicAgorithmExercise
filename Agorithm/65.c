#include<stdio.h>

int sc[100];

int main() {


	int num;
	int i = 0;
	while(scanf("%d", &num)!= EOF){

		sc[i] = num ;
		i ++;
	}
	for (int j = 0; j < i; j ++) {
		printf("%d ", sc[j]);

	}
	return 0;

}

