class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,vector<int>>mp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
            mp[t[i]].push_back(i);
        }
        for(auto p:mp){
            cout<<p.first<<endl;
            ans += abs(p.second[0] - p.second[1]);
        }
        return ans;
    }
};