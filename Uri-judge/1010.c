#include <stdio.h> 
#include <stdlib.h> 

int main (){ 
	int productCode1, productQTD1, productCode2, productQTD2; 
	float price1, price2; 
	scanf("%d%d", &productCode1, &productQTD1);
	scanf("%f", &price1); 
	scanf("%d%d", &productCode2, &productQTD2); 
	scanf("%f", &price2); 
	printf("VALOR A PAGAR: R$ %.2f\n", productQTD1 * price1 + productQTD2 * price2); 
	return 0; 
}
