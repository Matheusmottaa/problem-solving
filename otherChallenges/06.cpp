#include <iostream> 

using namespace std; 


void func1(int); 
void func2(int); 

int main()
{
    int n; 
    cin >> n; 

    func2(n); 

    return 0; 
}


void func1(int n)
{
    int numEsp, numAst; 
    numEsp = n - 1; 
    numAst = 1; 

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<numEsp; j++)
            cout << "-"; 
        numEsp--; 

        for(int j=0; j<numAst; j++)
            cout << "*"; 
        
        numAst+=2; 

        cout << endl; 
    }
    
}

void func2(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>i; j--)
            cout << " "; 

        for(int j=0; j<2*i+1; j++)
            cout << "*" ; 
        
        if(i==n-1)
        {
            cout << endl; 

            for(int j=0; j<4; j++)
            {
                for(int j=0; j<((2*i+1)/2); j++)
                    cout << " "; 
                cout << "|\n"; 
            }
        }
        cout << endl; 
    }
}