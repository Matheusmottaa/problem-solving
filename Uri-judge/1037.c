#include <stdio.h> 

int main(){ 
	float X; 
	scanf("%f", &X); 
	if(X<0 || X>100)
		printf("Fora de intervalo\n"); 
	else {
	 if(X<=25)
		printf("Intervalo [0,25]\n");
	 else if(X<=50)
		printf("Intervalo (25,50]\n");
	 else if(X<=75)
		printf("Intervalo (50,75]\n"); 
	 else if(X<=100)
		printf("Intervalo (75,100]\n");
	}
	return 0; 
}

