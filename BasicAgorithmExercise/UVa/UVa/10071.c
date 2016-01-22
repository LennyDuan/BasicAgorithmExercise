#include<stdio.h>

int main()
{

		int v, t, dis;

		scanf("%d %d", &v, &t);
  	    
	 	if (v<0) {
			v = -v;
		}

  		dis = 2 * v * t;		
		
		printf("%d \n", dis);
}

