#include <iostream> 

using namespace std; 

int main()
{ 

    float x,y, sum = 0.0f; 
    int count = 0; 

    cin >> x >> y;

    while(1)
    { 
        if(x>=0 && x<=10)
        { 
            sum += x; 
            count++; 
        }
        else 
            cout << "nota invalida\n"; 
            
        if(y>=0 && y<=10)
        { 
            sum += y; 
            count++; 
        }
        else 
           cout << "nota invalida\n"; 

        if(count==2) break; 
        cin >> x >> y; 
    }
    cout.setf(ios_base::fixed, ios_base::floatfield); 
    cout.precision(2); 
    cout << "media = " << sum/2.0f << endl; 
    return 0; 
}