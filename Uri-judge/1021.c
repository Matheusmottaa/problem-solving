#include <stdio.h> 
#include <stdlib.h> 

void otherSolution(); 
 
int main() {
    double money, cedulas[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int i = 0, j;
    scanf("%lf", &money);
    printf("NOTAS:\n");
    money+=1e-9;
    while (cedulas[i] >= 0.01){
        j = 0;
       while (money >= cedulas[i]){
          money -= cedulas[i];
		  j++;
	  }
        if(cedulas[i] == 1.0)
            printf("MOEDAS:\n");
        if(cedulas[i] >= 2.0 )
            printf("%d nota(s) de R$ %.2f\n", j, cedulas[i]);
        else
            printf("%d moeda(s) de R$ %.2f\n", j, cedulas[i]);
        i++;
	}
    return 0;
}


void otherSolution(){ 
	int note, coins; 
	double money;
	scanf("%lf", &money); 
	note = (int)money;
	coins =  (money - note)*100;
	printf("%d nota(s) de R$ 100.00\n", note/100);
	note %= 100; 
	printf("%d nota(s) de R$ 50.00\n", note/50);
	note %=50; 
	printf("%d nota(s) de R$ 20.00\n", note/20);
	note %=20;
	printf("%d nota(s) de R$ 10.00\n", note/10);
	note %=10; 
	printf("%d nota(s) de R$ 5.00\n", note/5);
	note %=5; 
	printf("%d nota(s) de R$ 2.00\n", note/2);
	printf("MOEDAS: \n"); 
	note %= 2; 
	printf("%d moeda(s) de R$ 1.00\n", note);
	printf("%d moeda(s) de R$ 0.50\n", coins/50); 
	printf("%d moeda(s) de R$ 0.25\n", ((coins%50)/25));
	printf("%d moeda(s) de R$ 10.00\n", ((coins%50)%25)/10);  
	printf("%d moeda(s) de R$ 0.05\n", (((coins%50)%25)%10)/5);
	printf("%d moeda(s) de R$ 0.001\n", (((coins%50)%25)%10)%5); 
}
