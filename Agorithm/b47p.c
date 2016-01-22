#include<stdio.h>
#include<math.h>

int main() {

	int i;

	float sum = 0.0;

	for (i = 1;i < 10000000;i ++) {
		float num = 1.0 / (2.0 * i - 1.0); 
		int bo = pow(-1, i + 1);
		sum = sum + bo * num;
		printf("%f \n", sum);
		if (num < 0.000001) {
			break;
		}
	}

	return 0;
}
