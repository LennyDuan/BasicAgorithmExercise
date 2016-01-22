#include<stdio.h>
#include<math.h>

#define PI 3.1415926
int main() 
{

	float q1a, q1b, q1c;
	printf("Question 1: average\n");
	scanf("%f %f %f", &q1a, &q1b, &q1c);
	printf("The average number: %.3f \n", (q1a + q1b + q1c) / 3);


	float q2a, q2b;
	printf("Question 2: temperature\n");
	scanf("%f", &q2a);
	q2b = 5 * (q2a - 32) / 9;
	printf("The temperature is: %.3f \n", q2b);

	int q3a;
	long long q3sum;
	printf("Question 3: summary\n");
	scanf("%d", &q3a);
	for (int i = 1; i <= q3a; i ++) {
		q3sum += i;
		printf("%lld \n", q3sum);
	}

	printf("The summary is: %lld \n", q3sum);

	double q4a, q4b, q4c;
	printf("Question 4: sincos\n");
	scanf("%lf", &q4a);
	q4b = sin(q4a * (PI / 180));
	q4c = cos(q4a * (PI / 180));
	printf("The sin: %f cos: %f \n", q4b, q4c);

	int q5a;
	printf("Question 5: odd \n");
	scanf("%d", &q5a);
	if (q5a % 2 == 0) printf("yes");
	else printf("no");
	printf("\n");


	return 0;
}
