#include<stdio.h>

#define INF 100000000

int main() {

	FILE *fin, *fout;
	fin = fopen("data.in", "r");
	fout = fopen("data.out", "w");

	int x, i = 0 , min = INF, max = -INF, s = 0;
	while (fscanf(fin, "%d", &x) == 1) {
		s += x;
		if (x < min) min = x;
		if (x > max) max = x;
		i ++;
	}

	fprintf(fin,"%d %d %.1f", min, max, (double)s/i);
	fclose(fin);
	fclose(fout);

	return 0;
}

