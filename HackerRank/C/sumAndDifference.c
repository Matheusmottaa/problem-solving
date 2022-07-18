#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
  int n1,n2; 
  float n3,n4; 
  scanf("%d%d%f%f", &n1,&n2,&n3,&n4); 
  printf("%d\t%d\n%.1f\t%.1f\n", n1+n2, n1-n2, n3+n4, n3-n4); 

  return 0; 
}