class Solution {
        int ans=0;
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-1;i++){
           
if(nums[i]==nums[i+1]){

   ans=nums[i];
            return ans;
}
            
        }
        return -1;
    }
};