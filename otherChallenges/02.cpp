#include <iostream>
using namespace std;

int main() {
  int n = 0; 
  cin >> n; 
  if(n<1||n>200) 
    return 0; 
  int counter = 0; 
  float average = 0.0f; 
  int nota = 0; 
  int vec[n]; 
  int sum = 0; 

  for(int i=0;i<n;i++)
  { 
    cin >> nota; 
    if(nota<0||nota>100) return 0; 
    vec[i] = nota; 
    sum += vec[i]; 
  }

  
  average = (float)sum/n; 
  

  for(int i=0; i<n;i++)
  { 
    if(vec[i]>average)
      counter++; 
  }

  cout << counter << endl; 

  return 0;
}