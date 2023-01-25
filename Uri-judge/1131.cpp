#include <iostream> 

using namespace std; 

int main()
{ 
    int scoreI, scoreG, n = 1, count = 0, gremio = 0, inter = 0, empate = 0; 



    while(n!=2)
    { 
        cin >> scoreI >> scoreG; 
        if(scoreI==scoreG)
            empate++; 
        else if(scoreI>scoreG)
            inter++; 
        else 
            gremio++; 
        count++; 
        cout << "Novo grenal (1-sim 2-nao)\n"; 
        cin >> n; 
        while(n<1||n>2)
        { 
            cout << "Novo grenal (1-sim 2-nao)\n"; 
            cin >> n; 
        }
    }

    cout << count << " grenais\n"; 
    cout << "Inter:" << inter << endl ; 
    cout  << "Gremio:" << gremio << endl; 
    cout << "Empates:" << empate << endl; 

    if(inter>gremio)
        cout << "Inter venceu mais\n"; 
    else 
        cout << "Gremio venceu mais\n"; 

    return 0; 
}