#include <stdio.h> 
#include <stdlib.h> 
 
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
