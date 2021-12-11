#include <stdio.h> 

int main(){
	float A,B,C,X; 
	scanf("%f%f%f", &A, &B, &C);
	if((A < B + C && B < A + C) && C < A + B){
		X = A+B+C;
		printf("Perimetro = "); 
	} else { 
		X = ((A + B)*C)/2.0; 
		printf("Area = "); 
	}
	printf("%.1f\n", X); 
	return 0; 
}
