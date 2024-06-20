class Solution {
public:
 string removeDuplicates(string s) {
     string str="";
     int n=s.length();
     for(int i=0;i<n;i++){
         if( str.length()>0&&str[str.length()-1]==s[i]){
                          str.pop_back();

         }
         else{
                         str.push_back(s[i]);

         }
     }
         return str;

     }
};