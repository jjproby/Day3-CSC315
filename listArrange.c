#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( int argc, char** argv ) {
	
	srand(time(NULL));
	int r = rand() % 50;
	double points[r];
	double L0[r-2];
	double L1[r-2];
	int i = 0;
	int list1 = 0;
	int list0 = 0;
	double x;

	while ( i < r ) {
		x = rand() % 100;
		x = x/100;
		points[i] = x;
		i++;
	}
	
	printf("%f, %f, %f\n", points[0], points[1], points[2]);
	double P0 = points[0];
	double P1 = points[1];
	i = 2;
	
	printf("%f, %f\n", P0, P1);
	
	while (i < r-2) {
			if( points[i] < P0 && points[i] < P1) {
			if (P0 - points[i] < P1 - points[i]) {
				printf( "Point %d is closer to %f\n", i, P0);
				L0[list0] = points[i];
				list0++;
			}
			else {
				printf( "Point %d is closer to %f\n", i, P1);
				L1[list1] = points[i];
				list1++;
			}
		}
		else if ( points[i] < P0 && points[i] > P1) {
			if (P0 - points[i] < points[i] - P1) {
				printf( "Point %d is closer to %f\n", i, P0);
				L0[list0] = points[i];
				list0++;
			}
			else {
				printf( "Point %d is closer to %f\n", i, P1);
				L1[list1] = points[i];
				list1++;
			}
		}
		else if (points[i] > P0 && points[i] < P1) {
			if (points[i] - P0 < P1 - points[i]) {
				printf( "Point %d is closer to %f\n", i, P0);
				L0[list0] = points[i];
				list0++;
			}
			else {
				printf( "Point %d is closer to %f\n", i, P1);
				L1[list1] = points[i];
				list1++;
			}
		}
		else if (points[i] > P0 && points[i] > P1) {
			if (points[i] - P0 < points[i] - P1) {
				printf( "Point %d is closer to %f\n", i, P0);
				L0[list0] = points[i];
				list0++;
			} 
			else {
				printf( "Point %d is closer to %f\n", i, P1);
				L1[list1] = points[i];
				list1++;
			}
		}
		else if (points[i] == P0) {
			printf( "Point %d is closer to %f\n", i, P0);
			L0[list0] = points[i];
			list0++;
		}
		else if (points[i] == P1) {
			printf( "Point %d is closer to %f\n", i, P1);
			L1[list1] = points[i];
			list1++;
		}
		else {
			printf("Shit is fucked up");
		}
		i++;
	}//while
	printf("%f\n", L0[0]);
	printf("%f\n", L1[0]);

}//main
