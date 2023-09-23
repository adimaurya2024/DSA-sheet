class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low_index=0;
        int high_index=nums.size()-1;
        while(low_index<=high_index)
        {
            int mid=low_index+(high_index-low_index)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target)
            {
                low_index=mid+1;
            }
            else
            {
                high_index=mid-1;
            }
        }
        return low_index;
        
    }
};
