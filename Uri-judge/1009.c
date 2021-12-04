#include <stdio.h> 
#include <stdlib.h> 

int main (){ 

	char name[100]; 	
	double X, Y; 
	scanf("%s", name); 
	scanf("%lf%lf", &X, &Y); 
	printf("TOTAL = R$ %.2lf\n", X  + Y * 0.15); 
	return 0; 
}
