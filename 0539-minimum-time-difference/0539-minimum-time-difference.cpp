class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        int totalMinutes;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,3));
            int min=stoi(curr.substr(3,2));
           int  totalMinutes=hours*60+min;
            minutes.push_back(totalMinutes);
        }
            sort(minutes.begin(),minutes.end());
           
   int  mini=INT_MAX;
            
            

        int n=minutes.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int ans;
                    ans=minutes[j]-minutes[i];
                ans=abs(ans);
                mini=min(mini,ans);
               
            }
            
        }
        int lastans=(minutes[0]+1440)-minutes[n-1];
        mini= min(mini,lastans);
        return mini;
    }
};