class Solution {
public:
    void sortColors(vector<int>& nums) {
     //   sort(nums.begin(),nums.end());
            
        int s=0;
       int  e=nums.size()-1;
        int i=0;
        while(s<=e){
        if(nums[s]==0){
            swap(nums[s],nums[i]);
            s++;
            i++;
        }
        else if(nums[s]==1){
            s++;
        }
        else if(nums[s]==2){
swap(nums[s],nums[e]);
            e--;
        }
    
      }
    }
    };