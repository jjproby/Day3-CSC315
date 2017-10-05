#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( int argc, char** argv ) {
	
	srand(time(NULL));
	int r = rand() % 50;
	double points[r];
	int i = 0;
	double x;

	while ( i < r ) {
		x = rand() % 10;
		x = x/10;
		points[i] = x;
		i++;
	}
	
	printf("%f, %f, %f\n", points[0], points[1], points[2]);


}//main
