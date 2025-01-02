class Solution {
public:
    bool is_vowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> cnt(words.size(), 0);
        vector<int> ans;
        cnt[0] = is_vowel(words[0][0]) && is_vowel(words[0].back()) ? 1 : 0;
        for (int i = 1; i < words.size(); i++) {
            cnt[i] = cnt[i - 1] + (is_vowel(words[i][0]) && is_vowel(words[i].back()) ? 1 : 0);
        }
        for (const auto& q : queries) {
            int l = q[0];
            int r = q[1];
            if (l == 0) {
                ans.push_back(cnt[r]);
            } else {
                ans.push_back(cnt[r] - cnt[l - 1]);
            }
        }

        return ans;
    }
};
