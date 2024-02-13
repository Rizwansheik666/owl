class Solution {
public:
    bool ispalindrome(string s){
        int n = s.size();
        for (int i = 0; i < n / 2; i++){
            if (s[i] != s[n - i - 1]){
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]) or isdigit(s[i])){
                s1+=tolower(s[i]);
            }
        }
        if(ispalindrome(s1)) return true;
        return false;
    }
};