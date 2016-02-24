#include<stdio.h>

int arr[] = {1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 7, 7, 7, 7, 8, 8};

int main() {
	int i, j, cnt;
	i = 0;
	cnt = 0;

	for(j = 1; j < sizeof(arr)/sizeof(int); j++) {
		if (arr[j] != arr[i]) {
			cnt ++;	
			arr[i] = arr[j];
		}
	}
	printf("%d\n", cnt);
}
