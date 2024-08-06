class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);
        for(int i=0;i<word.size();i++){
            v[word[i]-'a']++;
        }
        sort(v.rbegin(),v.rend());
        int n = 8, ans = 0, cn = 1;  
        for (int i = 0; i < 26; ++i) {
            if (v[i] == 0) break;              
            ans += v[i] * cn;  
            n--;
            if (n == 0) {
                n = 8;
                cn++;
            }
        }
        return ans;
    }
};