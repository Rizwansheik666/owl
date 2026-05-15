class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(auto l:s){
            ans+=tolower(l);
        }
        return ans;
    }
};