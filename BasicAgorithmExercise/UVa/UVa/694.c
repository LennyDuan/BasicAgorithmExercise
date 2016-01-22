#include<stdio.h>

int A,L;
int main()
{
		int Case = 1;
		while (scanf("%d %d", &A, &L) && !(A == -1 && L == -1)) {

				long long num = A;
				int terms = 1;

				while (num != 1) {
						if (num % 2 == 0) num = num / 2;
						else num = num * 3 + 1;
						if (num > L) break;
						terms ++;
				}

				printf("Case %d: A = %d, limit = %d , number of terms = %d \n", Case ++, A, L, terms);
		}
				
		return 0;
}
