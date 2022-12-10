#include <iostream> 

using namespace std; 

int main()
{ 
  int n; 
  cin >> n; 

  int n1, n2; 

  int sum; 

  for(int i=0;i<n;i++)
  { 
    cin >> n1 >> n2; 

    if(n2 > n1){ 
      int aux = n1; 
      n1 = n2; 
      n2 = aux; 
    }

    sum = 0; 
    for(int j=n2+1;j<n1;j++)
      if(j%2!=0) sum += j; 

    cout << sum << endl; 

  }
  return 0; 
}

