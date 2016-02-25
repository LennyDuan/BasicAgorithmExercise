#include<stdio.h>

int arr1[] = {2, 0, 3, 0, 12};
int arr2[] = {2, 0, 8, 1, 0, 3, 0, 12};
int arr3[] = {0, 0, 9, 2, 0,1, 0, 3, 0, 12};

int *moveZeroes(int nums[], int numsSize) {
	int zero = 0;
	for (int i = 0; i < numsSize; i ++) {
		if (nums[i] == 0) {
			zero ++;
		} else {
			nums[i - zero] = nums[i];
		}
	}
	for (int i = numsSize - zero; i < numsSize; i ++) {
		nums[i] = 0;
	}

	return nums;
}

int main() {

	for(int i = 0; i < 5; i++) {
		printf("%d, ", moveZeroes(arr1, 5)[i]);
	}
	printf("\n");
	for(int i = 0; i < 8; i++) {
		printf("%d, ", moveZeroes(arr2, 8)[i]);
	}
	printf("\n");
	for(int i = 0; i < 10; i++) {
		printf("%d, ", moveZeroes(arr3, 10)[i]);
	}

	return 0 ;
}
