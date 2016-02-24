#include<stdio.h>
#include<stdbool.h>
char  a[] = "aabdefg";
char  b[] = "abaedfg";
char  c[] = "baedfg";
char  d[] = "abefgd";

char *sort(char arr[]) {
	for(int i = 0; i <= sizeof(*arr) / sizeof(char); i ++) {
		for(int j = 1; j <= sizeof(*arr) / sizeof(char); j++) {
			if (arr[i] > arr[j]) {
				char c;
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
	return arr;
}

bool compare(char one[], char two[]) {
	if (sizeof(*one) / sizeof(char) != sizeof(*two) /sizeof(char)) {
		return false;
	} else {
		for (int i = 0; i < sizeof(*one) /sizeof(char); i ++) {
			if (one[i] != two[i]) {
				return false;
			}	       
		}
		return true;
	}
}

int main() {

	printf(compare(a, c) ? "true\n" : "false\n");
	printf(compare(a, b) ? "true\n" : "false\n");
	printf(compare(b, c) ? "true\n" : "false\n");
	printf(compare(d, c) ? "true\n" : "false\n");
	printf(compare(b, d) ? "true\n" : "false\n");

	return 0;
}
