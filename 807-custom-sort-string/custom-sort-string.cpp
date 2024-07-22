class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans="";
        
        for(int i=0;i<order.size();i++){
            int temp=mp[order[i]];
            while(temp>0){
                ans+=order[i];
                temp--;
                mp[order[i]]--;
            }
        }
        for(auto it:mp){
            int temp=it.second;
            while(temp>0){
                ans+=it.first;
                temp--;
            }
        }
        return ans;
    }
};