#include <stdio.h> 
#include <stdlib.h> 
#define pi 3.14159

int main (){
	double R; 
	scanf("%lf", &R); 
	printf("VOLUME = %.3lf\n", (4.0/3) * pi * R * R * R); 
	return 0; 
}
