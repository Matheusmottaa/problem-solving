#include <stdio.h> 

int main (){ 
	int X, Y; 
	float result; 
	scanf("%d%d", &X, &Y); 
	if(X == 1)
		result = Y * 4.00; 
	if(X == 2)
		result = Y * 4.50; 
	if(X == 3)
		result = Y * 5.00; 
	if(X == 4 )
		result = Y * 2.00; 
	if(X == 5)
		result = Y * 1.50; 
	printf("Total: R$ %.2f\n", result); 
	return 0; 
}
