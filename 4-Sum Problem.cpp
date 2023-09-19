class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n= nums.size();
       vector<vector<int>>ans;
       set<vector<int>>st;
       sort(nums.begin(), nums.end());
       for(int i=0; i<n-3; i++)
       {
           for(int j=i+1; j<n-2; j++)
           {
               int low = j+1;
               int high= n-1;
               long long new_target= (long long) target - (long long)nums[i]- (long long)nums[j];
               while(low<high){
               if(nums[low]+nums[high] < new_target)
               {
                   low++;
               }
               else if(nums[low] + nums[high] > new_target)
               {
                   high--;
               }
               else{
                   st.insert({nums[i],nums[j], nums[low],nums[high]});
                   low++;
                   high--;
               }
               }
           }
          
       } 
       for(auto it : st)
       {
           ans.push_back(it);
       }
       return ans;
    }
};
