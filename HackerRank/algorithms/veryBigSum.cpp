#include <iostream> 

long aVeryBigSum(vector<long> ar) {
    long acumulator = 0; 
    for(int i=0; i<ar.size(); i++)
        acumulator += ar[i]; 
    return acumulator; 
}