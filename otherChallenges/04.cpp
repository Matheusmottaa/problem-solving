#include <iostream> 

using namespace std; 

int main()
{ 
  int A,B,C; 
  int X,Y,Z; 
  cin >> A >> B >> C >> X >> Y >> Z; 

  int result = (X/A) * (Y/B) * (Z/C); 

  cout << result; 

  return 0; 
}