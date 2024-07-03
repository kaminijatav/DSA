class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int min_val=INT_MAX;
        if(n<=4){
            return 0;
        }
        min_val=min(min_val,nums[n-4]-nums[0]);        
        min_val=min(min_val,nums[n-3]-nums[1]);        
        min_val=min(min_val,nums[n-2]-nums[2]);        
        min_val=min(min_val,nums[n-1]-nums[3]);        
    return min_val;
    }
};