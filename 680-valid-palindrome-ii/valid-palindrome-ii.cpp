class Solution {
public:
    bool fun(string s){
        int n = s.size();
        for (int i = 0; i < n / 2; i++){
            if (s[i] != s[n - i - 1] ){
                return false;
            }
        }
        return true;
    }

    bool ispalindrome(string s){
        int n = s.size();
        for (int i = 0; i < n / 2; i++){
            if (s[i] != s[n - i - 1]){
                return fun(s.substr(0, i) + s.substr(i + 1)) || fun(s.substr(0, n - i - 1) + s.substr(n - i));
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        return ispalindrome(s);
    }
};