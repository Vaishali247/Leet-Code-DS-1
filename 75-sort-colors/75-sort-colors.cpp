class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        
        while(mid<=high){
            switch(nums[mid])
            {
                 // If the element is 0 
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                
                 // If the element is 1
                case 1:
                    mid++;
                    break;
                    
                 // If the element is 2
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
        
    }
};