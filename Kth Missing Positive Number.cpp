class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing =0;
        int it=0;
        for(int j=1; j<=arr.back(); j++){
            if(arr[it]==j){
                it++;
            }
            else
            {
                missing++;
            }
            if(missing==k)
            {
                return j;
            }
        }
        return arr.back() + k- missing;
        
    }
};
