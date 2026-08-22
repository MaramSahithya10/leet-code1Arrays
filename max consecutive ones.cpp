class Solution 
{
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxcount=0;
        int currentCount=0;
        for(int n:nums)
        {
            if(n==1)
            {
                currentCount++;
            }
            else
            {
                maxcount=max(maxcount,currentCount);
                currentCount=0;
            }
            
        }
        return max(maxcount,currentCount);
        
    }
};