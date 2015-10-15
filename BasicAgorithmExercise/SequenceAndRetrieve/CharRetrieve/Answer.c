#include<stdio.h>
#include<string.h>

int main() 
{
	char dic[2000][10];
	char relt[2000][10];
	int nrt = 0;
	int n = 0;
	int found = 0;
	for(;;) {

		scanf("%s", dic[n]);
		if(dic[n][0] == '*') break;
		n ++;
	}

	char s[10];

	while(scanf("%s", s) != EOF)
	{
		int find = 1;
		for(int j = 0; j < n; j ++) {
			int num = strlen(s);
			int num_dir = strlen(dic[j]);

			for(int k = 0; k < strlen(dic[j]); k ++) {
				for(int i = 0; i < strlen(s); i ++) {
					if(s[i] == dic[j][k]) {
						num_dir --;
						num --;
						break;
					}
					
				}
			}

			if((num == 0) && (num_dir == 0)) {
				printf("%s ", dic[j]);
				find = 0;
			}
		}
		if(find) printf(":(");
		printf("\n");
	}
	return 0;
}


//		for(int i = 0; i < n; i ++) {
//		printf("%s \n", dic[i]);
//	}

