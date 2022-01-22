class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int size = log2(n); 
        int currCount = 0; 
        int maxCount = 0; 
        for (int i = 0; i<= size; i++)
        {
            if (n & (1 << i)) currCount++; 
            else
            {
                if (maxCount < currCount) maxCount = currCount; 
                currCount = 0; 
            }
        }
        return max(maxCount, currCount); 
    }
};
