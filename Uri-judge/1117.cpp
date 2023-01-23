#include <iostream> 

using namespace std; 

int main()
{ 
    float x,y; 
    
    do{ 
        cin >> x; 
        if(x<0||x>10)
            cout << "nota invalida\n"; 
    }while(x<0||x>10); 

    do{ 
        cin >> y; 
        if(y<0||y>10)
            cout << "nota invalida\n"; 
    }while(y<0||y>10); 

    cout.setf(ios_base::fixed, ios_base::floatfield); 
    cout.precision(2); 
    cout << "media = " << (x+y)/2.0f << endl;

    return 0; 
}