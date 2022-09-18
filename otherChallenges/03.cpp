#include <iostream>

using namespace std; 


int main()
{ 
  int n; 
  cin >> n; 
  int vector[n]; 
  
  for(int i=0;i<n;i++)
  { 
   cin >> vector[i]; 
  }

  int aux = 0; 
  int temp = 0;   
  
  for(int i=0;i<n;i++)
  { 
    if(i<n/2)
    { 
      temp = vector[n-(i+1)]; 
      aux = vector[i]; 
      vector[n-(i+1)] = aux; 
      vector[i] = temp; 
    }
  }  
  
  for(int i=0;i<n;i++)
  { 
    cout << vector[i]; 
    if(i<n-1)
      cout << " "; 
  }
  
  cout << endl; 

  return 0; 
}
