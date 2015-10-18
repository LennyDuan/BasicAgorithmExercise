#include<stdio.h>

double area(double x0, double y0, double x1, double y1, double x2, double y2)
{
	return x0 * y1 + x2 * y0 + x1 * y2 - x2 * y1 - x0 * y2 - x1 * y0;
}

int coordi[100][100];
int main()
{
	double x0, y0 ,x1, y1, x2 ,y2;
	scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &x1, &y1, &x2, &y2);
	int count = 0;

	for(int i = 0; i < 100; i ++) {
		for(int j = 0; j < 100; j ++) {

			double s = area(x0, y0, x1, y1, x2, y2);
			double s1 = area(i, j, x0, y0, x1, y1);
			double s2 = area(i, j, x1, y1, x2, y2);
			double s3 = area(i, j, x2, y2, x0, y0);
			if(s == s1 + s2 + s3) count ++;
		}
	}

	printf("%d\n", count);

	return 0;
}
