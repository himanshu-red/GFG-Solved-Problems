class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        //code here
        int size = log2(n); 
        for (int i = 0; i <= size/2; i++)
        {
             if ((n & (1 << i)) && (n & (1 << (size - i))))
                 continue;
             if ((!(n & (1 << i))) && (!(n & (1 << (size - i)))))
                continue;
            n ^= (1 << i);
            n ^= (1 << (size - i));
    
        }
        return n; 
    }
};
