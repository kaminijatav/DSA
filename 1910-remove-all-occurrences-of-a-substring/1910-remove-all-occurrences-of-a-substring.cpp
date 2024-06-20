class Solution {
public:
    string removeOccurrences(string s, string part) {
        int sl=s.length();
        int pl=part.length();
     
        
        int   pos=  s.find(part) ;   
        while(pos!=string::npos){
            s.erase(pos,pl);
                       pos=  s.find(part) ;   

        }
        return s;
    }
};