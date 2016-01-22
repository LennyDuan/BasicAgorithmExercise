#include<stdio.h>
#include<string.h>

int main() 
{

		char istr[1000];
		char gstr[1000];
		char word[100];


		for (int i = 0; i <= strlen(istr); i++) {

						if (gstr[i] == ('<' & '>')) {
								strcpy (word, gstr);
								printf ("%s \n", word); 
								i++;
						}

						char ifw = istr[i];
						strcat (gstr, &ifw);
				}

		return 0;
}
								
