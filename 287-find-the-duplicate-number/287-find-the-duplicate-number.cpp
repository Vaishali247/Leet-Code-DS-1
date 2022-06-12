// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n= nums.size();
//         for(int i=0; i<(n-1); i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 if(nums[i] == nums[j])
//                     return nums[i];
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);
        
        fast = nums[0];
        while (fast != slow) {
            fast = nums[fast];
            slow = nums[slow];
        }
        return fast;
    }
};