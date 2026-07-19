class Solution {
public:
    string smallestSubsequence(string s) {
        map<char,int>mp;
        vector<bool>inAns(26,false);
        string ans="";
        for(auto l:s){
            mp[l]++;
        }
        for (char c : s) {
            while (!inAns[c - 'a'] &&
                   !ans.empty() &&
                   ans.back() > c &&
                   mp[ans.back()] > 0) {
                inAns[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            mp[c]--;
            if (!inAns[c - 'a']) {
                inAns[c - 'a'] = true;
                ans.push_back(c);
            }
        }
        return ans;
    }
};