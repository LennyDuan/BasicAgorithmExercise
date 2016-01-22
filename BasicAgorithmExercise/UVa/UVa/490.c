#include<stdio.h>
#include<string.h>



int max(int a, int b) 

{
		if (a>b)
				return a;
		else
				return b;
}

int main() 
{
		const int MAXN = 101;
		char str[MAXN][MAXN];

		int top = 0 ,max_len = 0;

		while (gets(str[top])) {
				max_len = max(max_len, (int)strlen(str[top]));
				top++;
		}

		for (int i = 0; i < max_len ; i++) {
				for (int j = top - 1; j >= 0; j--) 
						printf("%c", str[j][i] ? str[j][i] : ' ');
				printf("\n");
		}
		return 0;
}	



						
			  
