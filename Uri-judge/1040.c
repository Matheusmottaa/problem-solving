#include <stdio.h> 

int main(){ 
	double n1,n2,n3,n4,average, exam; 
	scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4); 
	average = (n1*2 + n2*3 + n3*4 + n4*1)/10.0; 
	printf("Media: %.1lf\n", average); 
	if(average >= 5.0 && average <= 6.9){ 
		printf("Aluno em exame.\n");
		scanf("%lf", &exam); 
		printf("Nota do exame: %.1lf\n", exam); 
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

