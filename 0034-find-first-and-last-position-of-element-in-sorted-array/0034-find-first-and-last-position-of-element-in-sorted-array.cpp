class Solution {
public:
int binarySearchLeft(vector<int>v,int target){
 int start=0;
        int end=v.size()-1;
        int ans=-1;
        while(start<=end){
        int mid=start+(end-start)/2;
            if(v[mid]==target){
           ans=mid;
end=mid-1;
            }else if(v[mid]<target){
             start=mid+1;
            }
            else if(v[mid]>target){
                end=mid-1;
            }
        }
        return ans;

}
int binarySearchRight(vector<int>v,int target){
 int start=0;
        int end=v.size()-1;
        int ans=-1;
        while(start<=end){
        int mid=start+(end-start)/2;
            if(v[mid]==target){
           ans=mid;
            start=mid+1;
            }
            else if(v[mid]<target){
             start=mid+1;
            }

            else if(v[mid]>target){
                end=mid-1;
            }

        }
        return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result{-1,-1};
       
        int left=binarySearchLeft(nums,target);
        int right=binarySearchRight(nums,target);
        result[0]=left;
        result[1]=right;
        return result;
    }   
};