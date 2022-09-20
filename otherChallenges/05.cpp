#include <iostream> 

using namespace std; 

int main()
{ 
  int L,D, K, P; 
  cin >> L >> D >> K >> P;

   int result = L/D * P + L * K; 

   cout << result << endl; 

  return 0;
}