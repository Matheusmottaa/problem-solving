#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
	int X; 
	float Y; 
	scanf("%d", &X); 
	scanf("%f", &Y); 
	printf("%.3fkm/l\n", X/Y); 
	return 0; 
}
