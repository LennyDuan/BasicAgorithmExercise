#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	scanf("%s", str);

	int i = strlen(str);
	int num;

	int ok = 1;
	for(num = 1; num < i; num ++) {
		for (int j = num; j < i; j += num) {
			for(int k = 0; k < num; k++){
				if (str[0 + k] == str[j + k]) {
					ok = 0;
				}else ok = 1;
			}
		}
		if (ok == 0) {
			printf ("%d\n", num);
			break;
		}
	}

	return 0;
}





