class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i]) > 0){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                for(auto l:mp){
                    if(l.second==t[i]) return false;
                }
                mp[s[i]]=t[i];
            }

        }
        return true;
    }
};