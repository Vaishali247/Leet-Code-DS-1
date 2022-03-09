class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //using kadane's algorithm
        
        int MaxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum = sum+nums[i];
            MaxSum = max(MaxSum, sum);
            if(sum<0)
                sum = 0;
        }
        return MaxSum;
    }
};