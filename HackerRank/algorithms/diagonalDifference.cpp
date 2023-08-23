// O(n^2)
int diagonalDifference(vector<vector<int>> arr) {
    int leftToRight = 0; 
    int rightToLeft = 0; 
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            if(i == j)
                leftToRight += arr[i][j]; 
            if(i+j == arr.size()-1)
                rightToLeft += arr[i][j]; 
        }
    }
    return abs(leftToRight-rightToLeft); 
}


// Other way: 

// O(n). 
int diagonalDifference(vector<vector<int>> arr) {
    int leftToRight = 0; 
    int rightToLeft = 0; 
    int i = 0, j = arr.size() - 1; 
    while(i<arr.size())
    {
        leftToRight += arr[i][i]; 
        rightToLeft += arr[i][j]; 
        i++; 
        j--; 
    }
    return abs(leftToRight - rightToLeft); 
}


