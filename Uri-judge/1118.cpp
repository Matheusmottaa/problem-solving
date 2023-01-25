#include <iostream> 
#include <iomanip> 

using namespace std; 

int main()
{ 
    double score, sum = 0.0; 
    int n = 1, count = 0; 

    cout << fixed << setprecision(2); 

    while(n!=2)
    { 
        cin >> score; 
        if(score>=0&&score<=10)
        { 
            sum += score; 
            count++; 

            if(count == 2)
            { 
                cout << "media = " << sum/2.0 << endl; 
                sum = 0.0; 
                count = 0; 
                cout << "novo calculo (1-sim 2-nao)\n"; 
                cin >> n; 
                while(n<1||n>2)
                { 
                    cout << "novo calculo (1-sim 2-nao)\n"; 
                    cin >> n; 
                }
            }
        }else { 
            cout << "nota invalida\n"; 
        }
    }
    

    return 0; 
}