#include <stdio.h> 
#include <stdlib.h> 

int main (){
	int time, velocity; 
	float X; 
	scanf("%d%d", &time, &velocity); 
	X = time * velocity / 12.0;
	printf("%.3f\n", X);  
	return 0; 
} 
