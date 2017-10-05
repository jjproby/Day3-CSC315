#include <math.h>

double arithmeticMean( double x, double y ) {
	return (x + y)/2;
}

double geometricMean( double x, double y ) {
	return sqrt( x * y );
}

double harmonicMean( double x, double y ) {
	return 2/(1/x + 1/y);
}

double eucDistance(double x1, double y1, double x2, double y2) {
	double x = x2 - x1;
	double y = y2 - y1;
	double a = pow(x, 2);
	double b = pow(y, 2);
	return sqrt(a + b);

}
