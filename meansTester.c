#include <stdio.h>
#include "means.h"

int main( int argc, char** argv ) {
	
	double x = 3.0;
	double y = 4.0;
	double x1 = 3.0;
	double y1 = 4.0;
	double x2 = 8.0;
	double y2 = 9.0;

	printf( "arithmetic mean of %6.2f and %6.2f = %6.2f\n", x, y, arithmeticMean(x,y) );
	printf( "geometric mean of %6.2f and %6.2f = %6.2f\n", x, y, geometricMean(x,y) );
	printf( "harmonic mean of %6.2f and %6.2f = %6.2f\n", x, y, harmonicMean(x,y) );
	
	printf( "The distance between points (%6.2f, %6.2f) and (%6.2f, %6.2f) is %6.2f\n", x1, y1, x2, y2, eucDistance(x1,y1,x2,y2) );
}
