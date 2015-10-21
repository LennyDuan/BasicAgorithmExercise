#include<stdio.h>

int n, m;
const int MAX = 500000 + 10;
int list[MAX];

void out_put() {

	for(int i = 0 ; i < n ; i ++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

int find_p(int x) {

	int p;
	for(int i = 0; i < n; i ++ ) {
		if(list[i] == x) 
		{ 
			p = i;
			break;
		}
	}

	return p;
}
void xy_left(int x, int y) {
	int num = list[x];
	for(int i = x; i < y; i ++) {
		list[i] = list[i + 1];
	}
	list[y - 1] = num;
}


void yx_left(int x, int y) {
	int num = list[x];
	for(int i = x; i > y; i --) {
		list[i] = list[i - 1];
	}
	list[y] = num;
}


void yx_right(int x, int y) {
	int num = list[x];
	for(int i = x; i > y; i --) {
		list[i] = list[i - 1];
	}
	list[y + 1]  = num;
}
void xy_right(int x, int y) {
	int num = list[x];
	for(int i = x; i < y; i ++) {
		list[i] = list[i + 1];
	}
	list[y]  = num;
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 0 ; i < n ; i ++) {
		list[i] = i + 1; 
	}
	out_put();
	char type;
	int x, y;

	for(int i = 0; i < m; i ++) { 

		scanf("%s%d%d", &type, &x, &y); 
		if(type == 'A') {
			printf("Move %d to the left of %d \n", x, y);
			if(x < y) {
				x = find_p(x);
				y = find_p(y);
				xy_left(x, y);
			}
			else if (x > y){
				x = find_p(x);
				y = find_p(y);
				yx_left(x, y);
			}
		}
		else if(type == 'B') {
			printf("Move %d to the right of %d \n", x, y);
			if(x > y) { 
				x = find_p(x);
				y = find_p(y);
				yx_right(x ,y);
			}
			else if (x < y) {
				x = find_p(x);
				y = find_p(y);
				xy_right(x, y);
			}
		}
		else continue;

	}
	out_put();
	return 0;
}

