#include<stdbool.h>
#include<stdio.h>

void go_E(int* log)
{
		*log = *log + 1;
}

void go_W(int* log)
{
		*log = *log - 1;
}

void go_S(int* lat)
{
		*lat = *lat - 1;
}

void go_N(int* lat)
{
		*lat = *lat + 1;
}

int main()
{
		int latitudes, longitudes;
		scanf ("%d %d", &latitudes, &longitudes);

		int lat_dir, log_dir;
		scanf ("%d %d", &lat_dir, &log_dir);

		bool DW = false;
		bool DE = false;
		bool DN = false;
		bool DS = false;

		for (int i = 0;; i++) {


				if (lat_dir < latitudes) {

						go_S (&latitudes);
						DS = true;
						if (log_dir < longitudes) {
								go_W (&longitudes);
								DW = true;
						} else if (log_dir > longitudes) {
								go_E (&longitudes);
								DE = true;
						}

				} else if (lat_dir > latitudes) {

						go_N (&latitudes);
						DN = true;
						if (log_dir < longitudes) {
								go_W (&longitudes);
								DW = true;
						} else if (log_dir > longitudes) {
								go_E (&longitudes);
								DE = true;
						}
				} else if ( latitudes == lat_dir || longitudes == log_dir) {
						if (log_dir < longitudes) {
								go_W (&longitudes);
						} else if (log_dir > longitudes) {
								go_E (&longitudes);
						} else if (latitudes < lat_dir) {
								go_N (&longitudes);
						} else if (latitudes > lat_dir) {
								go_S (&longitudes);
						}


				}
				
				printf ("%i, %i \n", latitudes, longitudes);
				if ( latitudes == lat_dir && longitudes == log_dir) break;
		}

		if (DN) {
				printf("GO NORTH");
				puts("\n");
		} if (DW) {
				printf("GO WEST");
				puts("\n");
		} if (DE) {
				printf("GO EAST");
				puts("\n");
		} if (DS) {
				printf("GO SOURTH");	
				puts("\n");
		}

		return 0;
}

