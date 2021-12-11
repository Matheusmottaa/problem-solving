#include <stdio.h> 

int main(){
	double A,B,C,X; 
	int i, j, menor;
	double v[3];  
	scanf("%lf%lf%lf", &v[0], &v[1], &v[2]); 
	
	for(i = 0; i < 2; i++){
		menor = i; 
	for(j = i + 1; j < 3; j++)
		if(v[menor]<v[j])
			menor = j; 
	X = v[i]; 
	v[i] = v[menor]; 
	v[menor] = X; 
	}
	
	A = v[0]; 
	B = v[1]; 
	C = v[2]; 
	
	if(A >= B + C){
		printf("NAO FORMA TRIANGULO\n"); 
		return 0; 		
	}
	if(A*A == (B*B) + (C*C))
		printf("TRIANGULO RETANGULO\n"); 
	if(A*A > (B*B)+(C*C))
		printf("TRIANGULO OBTUSANGULO\n"); 
	if(A*A < (B*B) + (C*C))
		printf("TRIANGULO ACUTANGULO\n");
	if(A == B && B == C)
		printf("TRIANGULO EQUILATERO\n");
	if((A == B && B != C) || (A == C && A != B) || (B == C && C != A))
		printf("TRIANGULO ISOSCELES\n");
		
	return 0; 
}
