class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for (const std::string& word : words) {
            if (word.compare(0, pref.length(), pref) == 0) {
                ans++;
            }
        }
        return ans;
    }
};