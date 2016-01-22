#include<stdio.h>
#include<string.h>

const int MAX = 20;
int s[1 << MAX];

int main() {
	int d, I;
	while(scanf("%d%d", &d, &I) == 2) {
		memset(s, 0, sizeof(s));
		int k, n = (1 << d) - 1;
		
		for(int i = 0; i < I; i ++) {
		       k = 1;
		       for(;;) {
			       s[k] = !s[k];
			       k = s[k] ?(k * 2) : (k * 2 + 1);
			       if(k > n) break;
		       }
		}

		printf("%d\n", k/2);
	}

	return 0;
}
	       	       
