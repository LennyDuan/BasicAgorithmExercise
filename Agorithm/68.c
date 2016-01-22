#include<stdio.h>

float f(float n) {
	
	float m = 1;
	for (float i = 1; i < n; i ++) {
		m *= i;
	}

	return m;
}

int main () {

	float m, n;
	scanf("%f %f", &m, &n);
	prfloatf("%d\f" , f(n)/(f(m) * f(n - m)));

	return 0 ;
}

	


