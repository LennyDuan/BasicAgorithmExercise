#include<stdio.h> 
#include<string.h>

int is_prime(int n)
{

	for(int i = 2; i * i <= n; i ++ ) 
		if (n % i == 0) return 0;
	return 1;
}


int main()
{
	int prime[100];
	int count = 0;
	for(int i = 2; i <=100; i ++ ) {
		if(is_prime(i)) { 
			prime[count] = i;
			count++;
		}
	}

	int input_num;
	while(scanf("%d", &input_num) == 1) {
		int list[100];
		memset(list, 0, sizeof(list));
		int num = 1;
		int total = 0;
		for(int i = input_num; i > 0; i --) {
			num = num * i;

			for(int i = 0; i < count; i ++) {
				int time = 0;
				while((num % prime[i]) == 0) {
					num = num / prime[i];
					time ++;
				}
				list[i] += time;
				if(i > total) total = i;
				if(prime[i] > num) break;
			}
		}
		for(int i = 0; i <= total; i ++) 
			printf("%d ", list[i]);

		printf("\n");
	}
	return 0;
}
