#include<stdio.h>

int main()
{
		long long a, b, Hashmat, Opponent,c;

		scanf("%lld \t %lld", &a, &b);
		
		if (a > b) {
				Hashmat = b;
				Opponent = a;
		} else {
				Hashmat = a;
				Opponent = b;
		}
		c = Opponent - Hashmat;

		printf("%lld \n", c);
}	

				


