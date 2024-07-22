class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<string>ans(n);
        map<int,string>mp;
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        int i=n-1;
        for(auto it:mp){
            ans[i]=it.second;
            i--;
        }
        return ans;
    }
};