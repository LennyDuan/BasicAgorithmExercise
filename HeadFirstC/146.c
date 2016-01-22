#include<stdio.h>

int main()
{	
		float latitudes, longitudes;
		char info[80];
		int started = 0 ;

		while (scanf ("%f, %f, %79[^\n]", &latitudes, &longitudes, info) == 3) {
				if (started) {
						printf ( "\n");
				} else {
						started  = 1;
				}
				
				if ((latitudes < -90) || (latitudes > 90)) {
						fprintf (stderr, "Invalid latitudes: %f\n", latitudes);		
//						return 2;
				}
				if ((longitudes < -180) || (longitudes > 180)) {
						fprintf (stderr, "Invalide longitudes: %f\n", longitudes);
//						return 2;
				}



				printf ( "{latitedes: %f , longitudes: %f, info : %s } \n", latitudes, longitudes, info);
		}

		return 0;
}

				

