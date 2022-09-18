#include <iostream> 
#include <iomanip> 

using namespace std; 

int main()
{ 
  float salary; 
  cin >> salary;
  cout << fixed << setprecision(2);  
  if(salary<=400){ 
    cout << "Novo salario: " << salary+salary*0.15 << endl; 
    cout << "Reajuste ganho: " << salary*0.15 << endl; 
    cout << "Em percentual: 15 %" << endl; 
  }else if(salary<=800){ 
    cout << "Novo salario: " << salary+salary*0.12 << endl; 
    cout << "Reajuste ganho: " << salary*0.12 << endl; 
    cout << "Em percentual: 12 %" << endl; 
  } else if(salary<=1200){ 
    cout << "Novo salario: " << salary+salary*0.1 << endl; 
    cout << "Reajuste ganho: " << salary*0.1 << endl; 
    cout << "Em percentual: 10 %" << endl; 
  }else if(salary<=2000){ 
    cout << "Novo salario: " << salary+salary*0.07 << endl; 
    cout << "Reajuste ganho: " << salary*0.07 << endl; 
    cout << "Em percentual: 7 %" << endl; 
  } else if(salary>2000){ 
    cout << "Novo salario: " << salary+salary*0.04 << endl; 
    cout << "Reajuste ganho: " << salary*0.04 << endl; 
    cout << "Em percentual: 4 %" << endl; 
  }
  return 0; 
}