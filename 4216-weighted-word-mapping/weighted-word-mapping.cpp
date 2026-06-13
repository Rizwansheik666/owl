class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            int sum = 0;

            for (char ch : words[i]) {
                int idx = ch - 'a';
                sum += weights[idx];
            }
            int l=abs((sum % 26)-25);
            char mp =  'a'+ l;
            ans += mp;
        }

        return ans;
    }
};