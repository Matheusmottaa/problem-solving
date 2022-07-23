#include <stdio.h> 

void showOutput(int a, int b); 

int main(){ 
  int a,b; 
  scanf("%d%d", &a, &b); 
  showOutput(a,b); 
  return 0; 
}

void showOutput(int a, int b){ 
  
  char words[9][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
  for(a;a<=b;a++){ 
    if(a<10){ 
      printf("%s\n", words[a-1]); 
    }else{ 
      if(a%2==0)
        printf("even\n"); 
      else  
        printf("odd\n"); 
    }
  }
}