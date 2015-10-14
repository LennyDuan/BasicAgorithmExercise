#include<stdio.h>
#include<string.h>

int get_next(int x) 
{

	int a, b;
	char num[5];
	sprintf(num, "%d", x);
	int len = strlen(num);

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (num[i] > num[j]) {
				char s = num[j];
				num[j] = num[i];
				num[i] = s;
			}
		}
	}

	sscanf(num, "%d", &b);

	for(int i = 0; i < len / 2; i++) {
		char s = num[i];
		num[i] = num[len - i - 1];
		num[len - i - 1] = s;
	}

	sscanf(num, "%d", &a);

	return  a - b ;
}

int main() 
{

	int num;
	scanf("%d", &num);
	printf("%d", num);
	int arry[2000];
	int i = 1;
	for(;;) {
		num = get_next(num);
		arry[i] = num;

		printf(" -> %d", arry[i]);
		if(arry[i - 1] == arry[i]) break;
		i ++ ;
	}
	printf("\n");
}


		

