#include<stdio.h>
#include<string.h>

char istr[10002];
char* pstr; 
char* os[10002];		
int main() 
{
		int T;
		scanf ("%d", &T);
		getchar();
		char sz[100];

		char str[1000];


		while (T-- && T != EOF) {

				istr[0] = getchar();

				pstr = strtok (istr, "<>");
				for (int i = 0; i < 5; i ++) {

						os[i] = pstr;
						pstr = strtok (NULL, "<>");
				}

				strncpy (str, os[0], 1000);
				strcat (str, os[2]);
				strcat (str, os[3]);
				strcat (str, os[1]);
				strcat (str, os[4]);

				printf ("%s \n", str); 

		}

		return 0;
}
