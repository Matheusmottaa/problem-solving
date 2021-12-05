#include <stdio.h> 
#include <stdlib.h> 

int main () { 
	int N, hours, min, sec; 
	scanf("%d", &N);
	hours = N/3600;
	N %= 3600;   
	min = N/60; 
	N %= 60; 
	sec = N;  
	printf("%d:%d:%d\n", hours, min, sec); 
	return 0; 
}
