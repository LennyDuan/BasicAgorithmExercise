#include<stdio.h>
#include<string.h>

char arr0[] = "A";
char arr1[] = "BA";
char arr2[] = "AD";
char arr3[] = "Z";
char arr4[] = "AA";

int Num(char* s) {
	int num = 0;
	for(int i = strlen[s] - 1; i > = 0 i --) {
		num += s[i] - 'A' + 1;
		num += 25 * (strlen[s] - 1) * (s[i] - 'A');
			


	}
	return num;
}

int main() { 
	printf("%d\n", Num(arr0));
	printf("%d\n", Num(arr1));
	printf("%d\n", Num(arr2));
	printf("%d\n", Num(arr3));
	printf("%d\n", Num(arr4));
	return 0;
}
