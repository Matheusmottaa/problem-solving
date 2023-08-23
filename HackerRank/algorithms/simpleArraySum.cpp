#include <iostream> 

int simpleArraySum(vector<int> ar) {
    int acumulator = 0; 
    for(int i=0; i<ar.size(); i++)
        acumulator += ar[i]; 
    return acumulator; 
}