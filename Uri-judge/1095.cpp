#include <iostream> 

using namespace std; 

int main()
{ 

  int j=60;
  int i =1;  
  for(i;j>=0;i+=3,j-=5)
    cout << "I=" << i << " J=" << j << endl; 
  return 0; 
}