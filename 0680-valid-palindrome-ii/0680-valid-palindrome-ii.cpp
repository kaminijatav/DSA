class Solution {
public:
    bool checkPalindrome(string s, int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
                            }

                start++;
                end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        
        while( i<=j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                        
                }
                else{
                   return checkPalindrome(s,i+1,j)|| checkPalindrome(s,i,j-1);
                }
          
            
        
        
        }
       return true;
    }
};