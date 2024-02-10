class Solution {
public:
    bool is_palindrom(string s){
        int n = s.size();
        for (int i=0;i<n/2;i++){
            if (s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        for (int i=0;i<n;i++){
            for (int j=i;j<n;j++){
                if (is_palindrom(s.substr(i,j-i+1))){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};