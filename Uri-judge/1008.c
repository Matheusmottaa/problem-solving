#include <stdio.h> 
#include <stdlib.h> 

int main (){
	int X, Y;
	float Z; 
	scanf("%d%d", &X, &Y);
	scanf("%f", &Z);  
	printf("NUMBER = %d\n", X); 
	printf("SALARY = U$ %.2f\n", Y * Z); 
	return 0; 
}
