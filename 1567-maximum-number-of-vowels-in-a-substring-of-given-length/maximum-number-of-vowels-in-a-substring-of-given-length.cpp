class Solution {
public:
    bool is_vowel(char c){
        if(c=='a' or c== 'e' or c== 'i' or c== 'o' or c== 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(is_vowel(s[i])){
                cnt++;
            }
        }
        int ans=cnt;
        for (int i = k; i < s.size(); i++) {
            if (is_vowel(s[i])) {
                cnt++;
            }
            if (is_vowel(s[i - k])) {
                cnt--;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};