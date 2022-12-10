#include <iostream> 
#include <iomanip> 

using namespace std; 

int main()
{ 

  float n; 
  float sum = 0; 
  int positiveValues = 0; 

  for(int i=0;i<6;i++)
  { 
    cin >> n; 
    if(n > 0)
    { 
      positiveValues++; 
      sum += n; 
    }
  }
  cout << fixed << setprecision(1); 
  cout << positiveValues << " valores positivos" << endl; 
  cout << sum/positiveValues << endl; 

  return 0; 
}