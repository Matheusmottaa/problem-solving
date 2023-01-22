#include <iostream> 

using namespace std; 

int main()
{ 
    int m, n, sum = 0, aux = 0; 
    cin >> m >> n; 

    while(m>0 && n > 0)
    { 
        if(m>n)
        { 
            aux = m; 
            m = n; 
            n = aux; 
        }
        for(int i=m;i<=n;i++)
        { 
            cout << i << " "; 
            sum += i; 
            if(i==n)
                cout << "Sum=" << sum << endl; 
        }
        sum = 0; 
        cin >> m >> n; 
    }

    return 0; 
}
