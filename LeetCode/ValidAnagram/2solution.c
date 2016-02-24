#include<stdio.h>
#include<stdbool.h>
char  a[] = "aabdefg";
char  b[] = "abaedfg";
char  c[] = "baedfg";
char  d[] = "abefgd";


bool compare(char one[], char two[]) {
	int conter[26] = {0};

	if (sizeof(*one) / sizeof(char) != sizeof(*two) /sizeof(char)) {
		return false;
	} else {
		for (int i = 0; i < sizeof(*one) /sizeof(char); i ++) {
			conter[one[i] - 'a']++;
			conter[two[i] - 'a']--;
		}	       
		for(int i = 0; i < sizeof(conter) /sizeof(int); i ++) {
			if(conter[i] != 0)
				return false;
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
