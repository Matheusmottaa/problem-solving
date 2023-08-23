void plusMinus(vector<int> arr) {
    int count[3] = {0}; 
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] > 0)
            count[0]++; 
        else if(arr[i] < 0)
            count[1]++; 
        else  
            count[2]++; 
    }
    for(int i=0; i<3; i++)
        std::cout << (float)count[i]/arr.size() << std::endl; 
}