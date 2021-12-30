
class Solution
{
public:
    void getSum(vector<int> arr,vector<int> &dp,  vector<int> &sums, int i, int size)
    {
        if (i == size)
        {
            sums.push_back(accumulate(dp.begin(), dp.end(), 0)); 
            return; 
        }
        dp.push_back(arr[i]); 
        getSum(arr, dp, sums,i+1, size); 
        dp.pop_back(); 
        getSum(arr, dp, sums, i+1, size); 
            
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sums; 
        vector<int> dp; 
        getSum(arr, dp, sums, 0, N); 
        return sums; 
    }
};

