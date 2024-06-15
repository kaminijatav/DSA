class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int cols=matrix[0].size();
        int n=row*cols;
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
  
        while(s<=e){
              int i=mid/cols;
        int j=mid%cols;
            if(matrix[i][j]==target){
                return true;
            }
             else if(matrix[i][j]<target){
s=mid+1;
             }
            if(matrix[i][j]>target){
                e=mid-1;
            }
          mid=s+(e-s)/2;  
        }
        
        
           return false; 
    }

};