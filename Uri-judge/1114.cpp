#include <iostream> 

using namespace std; 

int main()
{ 
    int password; 
    cin >> password; 
    while(password!=2002)
    { 
        cout << "Senha Invalida\n"; 
        cin >> password; 
    }
    cout << "Acesso Permitido\n"; 
    return 0; 
}