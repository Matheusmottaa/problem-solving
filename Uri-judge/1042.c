#include <stdio.h> 

int sort(int A, int B, int C, int posA, int posB, int posC); 

int main(){
	int A,B,C, posA, posB, posC; 
	scanf("%d%d%d", &A, &B, &C); 
	sort(A,B,C,posA,posB,posC); 
	printf("\n%d\n%d\n%d\n", A, B, C); 
	return 0; 
}


int sort(int A, int B, int C, int posA, int posB, int posC){
 if(A < B){ 
   if(A < C){
	posA = 1; 
	if(B < C){
	 posB = 2; 
	 posC = 3; 
	 }
	if(C < B){ 
	posB = 3; 
	 posC = 2; 
	  }
    }
		
	if(A > C){ 
	 posA = 2; 
	 posB = 3; 
	 posC = 1; 
	}
 }
		
  if(B < A){
   if(B < C){
	posB = 1;
   if(A < C){
	posA = 2; 
	posC = 3; 
   }
			    
   if(C < A){
	 posA = 3; 
	  posC = 2; 
	}
 }
			
   if(B > C){
	 posA = 3; 
	 posB = 2; 
	 posC = 1; 
   }
 }
		
	if(posA == 1)
		printf("%d\n", A); 
	if(posB == 1)
		printf("%d\n", B);
	if(posC == 1)
		printf("%d\n", C);
	if(posA == 2)
		printf("%d\n", A); 
	if(posB == 2)
		printf("%d\n", B);
	if(posC == 2)
		printf("%d\n", C);
	if(posA == 3)
		printf("%d\n", A); 
	if(posB == 3)
		printf("%d\n", B);
	if(posC == 3)
		printf("%d\n", C); 

	return 0; 
}

// OTHER SOLUTION
/* 
 void otherSolution(){ 
	int a,b,c; 
	scanf("%d%d%d", &a, &b, &c);
	
	if(a < b && b < c){
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if(a < c && c < b){
		printf("%d\n", a);
		printf("%d\n", c);
		printf("%d\n", b);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if(b < a && a < c){
		printf("%d\n", b);
		printf("%d\n", a);
		printf("%d\n", c);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if(b < c && c < a){
		printf("%d\n", b);
		printf("%d\n", c);
		printf("%d\n", a);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if(c < a && a < b){
		printf("%d\n", c);
		printf("%d\n", a);
		printf("%d\n", b);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else if(c < b && b < a){
		printf("%d\n", c);
		printf("%d\n", b);
		printf("%d\n", a);
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
}
 */
