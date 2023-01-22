#include <iostream> 

using namespace std; 

int main()
{ 
    int n, x, y; 
    cin >> n; 

    cout.setf(ios_base::fixed, ios_base::floatfield); 
    cout.precision(1); 

    for(int i=0;i<n;i++)
    { 
        cin >> x >> y; 
        if(y==0)
            cout << "divisao impossivel\n"; 
        else 
            cout << float(x)/y << endl; 
    }
    return 0; 
}