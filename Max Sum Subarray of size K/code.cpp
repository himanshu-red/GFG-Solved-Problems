/* https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1# */
// { Driver Code Starts

class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &v , int N){
        long long sum = accumulate(v.begin(), v.begin()+k, 0); 
        long long maxSum = sum;
        int back = 0; 
        for (int i = k; i< v.size(); i++)
        {
            sum+= v[i]; 
            sum-= v[back]; 
            if (sum > maxSum)
                maxSum = sum; 
            back++; 
        }
        return maxSum; 
    }
};

