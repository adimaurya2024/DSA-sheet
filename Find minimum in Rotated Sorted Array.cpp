class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
       int s= 0;
       int e= n-1; 
       while(e-s>1)
       {
           int mid= s+(e-s)/2;
           if(nums[s]>nums[e] && nums[mid]>nums[e])
           s= mid;
           else
           e= mid;
       }
       return min(nums[s],nums[e]);
    }
};
