#include<stdio.h>

int main() 
{

	int k, n, i;

	scanf("%d %d", &k, &n);

	int a[1000];
	int b[100];
	for (int i = 1; i <= k; i++) {
		a[i] = i;
		b[i] = i;
	}

	for (int j = 2; j < n; j++) {
		for(int i = 1; i <= k ; i ++) {
			if ( i % j == 0) {
			       printf("%d \n", i);
			} else {
			       b[i] = 0;
			}
		}
	}

	for (int i = 1; i <= k; i++) {
		if (b[i] == 0)	printf("%d ", i);
	}

	return 0;	
}
