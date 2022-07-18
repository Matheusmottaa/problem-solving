#include <stdio.h> 
#include <stdlib.h> 

#define MAX_LEN 100

int main(){ 
  char ch; 
  char s[MAX_LEN]; 
  char sen[100]; 
  scanf("%c\n%s\n%[^\n]s", &ch, s, sen); 
  printf("%c\n%s\n%s\n",ch,s,sen);
  return 0; 
}