class Solution {
public:
        int rem=0;
        int ans=0;
    int reverse(int x) {
        bool isneg=false;
        if(x<=INT_MIN){
            return 0;
        }

        if(x<0){
            isneg=true;
            x=-x;
        }
       while(x>0){
        if(ans>INT_MAX/10){
return 0;
        } int rem=x%10;

        ans=ans*10+rem;
       x=x/10;}
       if(isneg==true){
        return -ans;
       }
       else{
        return ans;
       }
       return  ans;
    }
};