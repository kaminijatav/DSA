class Solution {
public:
    int mySqrt(int x) {
        int s=0;
      long e=x;
     long ans=0;
      long mid=s+(e-s)/2;
        while(s<=e){
if(mid*mid==x){
    return mid;
}
else if(mid*mid<x){
ans=mid;
s=mid+1;
        }
        else if(mid*mid>x){
            e=mid-1;
        }
     mid=s+(e-s)/2; 
        }  
    return ans;
    }
};