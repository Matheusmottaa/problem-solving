#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main (){ 
	double X1, Y1, X2, Y2, distance; 
	scanf("%lf%lf%lf%lf", &X1, &Y1, &X2, &Y2); 
	distance = sqrt( powl(X1 - X2, 2) + powl(Y1 - Y2, 2) ); 
	printf("%.4lf\n", distance); 
	return 0; 
}
