#include <iostream> 

using namespace std; 

int main()
{ 

  for(int i=1, j=7;i<=9;j--){ 
    cout << "I=" << i << " J=" << j << endl; 
    cout << "I=" << i << " J=" << j-1 << endl; 
    cout << "I=" << i << " J=" << j-2 << endl; 
    i+=2; 
    j+=3; 
  }
  return 0; 
}