#include<stdio.h>
#include<string.h>
	
char s[] = "  `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";

int main() {
	char a;

	while(1) {
		scanf("%c", &a);
		for(int i = 1; i < strlen(s); i++) {
			if (a == s[i]) printf("%c",s[i-1]);
		}

	}
		printf("\n");

	return 0;
}

