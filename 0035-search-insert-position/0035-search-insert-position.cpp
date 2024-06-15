class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=0;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
              ans=mid+1;
             
                s=mid+1;

            }
            else if(nums[mid]>target){
                // ans=mid-1;
                e=mid-1;
            }
        mid=s+(e-s)/2;
           
        }       
        return ans;
    }
};