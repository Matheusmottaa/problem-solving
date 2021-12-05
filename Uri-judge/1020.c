#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
	int X, years, months, days; 
	scanf("%d", &X);
	
	printf("%d ano(s)\n", X/365);  
	X %= 365; 
	printf("%d mes(es)\n", X/30);  
	X %= 30; 
	printf("%d dia(s)\n",X);  
	return 0; 
}
