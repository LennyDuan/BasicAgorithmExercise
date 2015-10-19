#include<stdio.h>

const int MAX = 50;
int queue[MAX];

int main()
{

	int n, front, rear;
	scanf("%d", &n);

	for(int i = 0; i < n; i ++) 
		queue[i] = i + 1;

	front = 0;
	rear = n;

	while(front < rear) {
		printf("%d ", queue[front]);
		front += 1;
		queue[rear] = queue[front];
		rear += 1;
		front += 1;
	}

	return 0;
}

