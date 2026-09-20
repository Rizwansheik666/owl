class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            char up=toupper(s[i]);
            int temp= abs(up - 'A' + 1 - 27);
            ans+= temp*(i+1);
        }
        return ans;
    }
};