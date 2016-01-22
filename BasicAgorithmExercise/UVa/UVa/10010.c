#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int N, M, K;
char grid[100][100];
char word[100];


const int c_x[] = {
		-1, -1, -1,
		0, 0,
		1,1,1};

const int c_y[] = {
		-1, 0, 1,
		-1, 1,
		-1, 0, 1};



bool find(int x, int y, char str[])
{
		for (int i = 0; i < 8; i ++) {
				for (int j = 0; j <= strlen(str); j++) {
						if (j == strlen(str)) return true;
						int cur_x = x + c_x[i]; 
						int cur_y = y + c_y[i];

						if (grid[cur_x][cur_y] != word[j]) break;
				}
		
		}
		return false;
}	


int main ()

{
		int T;
		scanf("%d",&T);
		while (T--) {

				scanf("%d %d \n", &N, &M);

				for (int i = 0; i < N; i ++) {
						for (int j = 0; j < M ; j++) {
								grid[i][j] = tolower(getchar());
								printf("%c", grid[i][j]);
						}
						printf("\n");
				}
				scanf("%d", &K);
				for (int i = 0; i < K ; i++){
						scanf("%s", word);
						for (int l = 0; l < strlen(word) ; l++) {
								word[l] = tolower(word[l]);

								bool bo = true;
								for (int x = 1; x <= N && bo; x++) {
										for (int y =1; y <= M && bo; y++){
												if (find(x,y,word)) {
														printf( "%d %d \n", x, y);
														bo = false;
												}	

										}
								}
						}
				}
		}
		return 0;


}

