class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(!nums.size())
            return 0;
        
        sort(nums.begin(), nums.end());
        
        int longest = 1;
        int cur = 1;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                continue;
            if(nums[i]+1 == nums[i+1])
                cur++;
            else
            {
                longest = max(longest, cur);
                cur = 1;
            }
        }
        
        longest = max(longest, cur);
        
        return longest;
    }
};