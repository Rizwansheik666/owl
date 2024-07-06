class Solution {
public:
    int scoreOfString(string s) {
        int p=0;
        for(int i=1;i<s.size();i++){
            p+=abs(s[i-1]-s[i]);
        }
        return p;
    }
};