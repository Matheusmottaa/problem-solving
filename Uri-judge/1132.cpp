
#include <iostream> 

using namespace std; 

int main()
{ 
    int n1, n2, sum = 0, aux = 0; 

    cin >> n1 >> n2; 

    if(n1>n2)
    { 
        aux = n1; 
        n1 = n2; 
        n2 = aux; 
    }

    for(int i=n1; i<=n2;i++)
        if(i%13!=0) sum+=i; 

    cout << sum << endl; 

    return 0; 

}


/*
Other solution 
#include <iostream> 

using namespace std; 

int main()
{ 
    int n1, n2, sum = 0; 

    cin >> n1 >> n2; 

    if(n1>n2)
    { 
        for(int i=n2;i<=n1;i++)
            if(i%13!=0) sum += i; 
    }else { 
        for(int i=n1;i<=n2;i++)
            if(i%13!=0) sum += i; 
    }

    cout << sum << endl; 

    return 0; 
}
*/

