#include <iostream> 

using namespace std; 

double average(double x, double y)
{ 
    return (x+y)/2.0; 
}

int main()
{ 

    double score1, score2; 
    int n = 0; 
    cout.setf(ios_base::fixed, ios_base::floatfield); 
    cout.precision(2); 

    while(n!=2)
    { 
        do{ 
            cin >> score1; 
            if(score1<0||score1>10)
                cout << "nota invalida\n"; 
        }while(score1<0||score1>10); 
        do{ 
            cin >> score2; 
            if(score2<0||score2>10)
                cout << "nota invalida\n"; 
        }while(score2<0 || score2 > 10); 

        cout << "media = " << average(score1,score2) << endl;
        cout <<  "novo calculo (1-sim 2-nao) ";  
        cin >> n; 
        if(n>2||n<1)
        { 
            cout <<  "novo calculo (1-sim 2-nao) "; 
            cin >> n; 
        }
    }

    

    return 0; 
}