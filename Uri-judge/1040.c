#include <stdio.h> 

int main(){ 
	double A,B,C,D,average, exam; 
	scanf("%lf%lf%lf%lf", &A, &B, &C, &D); 
	average = ((A*2) + (B*3) + (C*4) + (D*1))/10.0; 
	printf("Media: %.1lf\n", average); 
	if(average >= 5.0 && average <= 6.9){ 
		printf("Aluno em exame.\n");
		scanf("%lf", &exam); 
		average = (average + exam) / 2.0; 
		if(average > 5.0){
			printf("Aluno aprovado.\n"); 
			printf("Media final: %.1lf\n", average);
			}
		else{	
			printf("Aluno reprovado.\n"); 
			printf("Media final: %.1lf\n", average);
			}
	}
	else if(average >= 7.0)
		printf("Aluno aprovado.\n"); 
	else 
		printf("Aluno reprovado.\n"); 
		
	return 0; 
}

