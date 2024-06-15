class Solution {
public:
double Binary(vector<int>ans,int n){
   
   double finalAns;
   
      if(n%2==0){ //number is even;
finalAns=(ans[n/2-1]+ans[n/2])/2.0;
      }  
     else  if(n%2!=0){ //number is odd;
finalAns=ans[n/2];
      }  
  
return finalAns;

}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int    n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int i=0;
        int j=0;
        int k=0;
        vector<int>ans(n);
        while(i<n1&&j<n2){
        if(nums1[i]<nums2[j]){
ans[k]=nums1[i];
k++;
i++;
        }
        else{
ans[k]=nums2[j];

j++;
k++;
        }
        }
        while(i<n1){
            ans[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n2){
            ans[k]=nums2[j];
            j++;
            k++;
        }
    double val=  Binary(ans,n);
//         double finalAns;
   
//       if(n%2==0){ //number is even;
// finalAns=(ans[n/2-1]+ans[n/2])/2.0;
//       }  
//      else  if(n%2!=0){ //number is odd;
// finalAns=ans[n/2];
//       }  
  
// return finalAns;




return val;
    }
};