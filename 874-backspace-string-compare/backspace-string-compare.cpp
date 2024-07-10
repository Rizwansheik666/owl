class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",s2="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                s1+=s[i];
                continue;
            }else if (!s1.empty()) {
                s1.erase(s1.size() - 1);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                s2+=t[i];
                continue;
            }else if (!s2.empty()) {
                s2.erase(s2.size() - 1);
            }
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
};