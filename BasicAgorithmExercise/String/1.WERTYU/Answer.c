#include<stdio.h>
#include<string.h>

char str[] = " `1234567890--=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
int main() 
{
	int i;
	char c;
	
	while(1) {
		scanf("%c", &c);
		for (i = 1; i < strlen(str); i ++) {
			if (c == str[i]) printf("%c", str[i-1]);
		}
	}
	
	printf("\n");	
	return 0;
}

	
	


