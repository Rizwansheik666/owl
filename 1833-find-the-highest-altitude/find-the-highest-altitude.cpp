class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cnt=0,ans=0;
        for(int i=0;i<gain.size();i++){
            cnt+=gain[i];
            ans=max(cnt,ans);
        }
        return ans;
    }
};