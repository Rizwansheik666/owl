class Solution {
public:
    bool closeStrings(string x, string y) {
        // map<char,int>mp1;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<x.size();i++){
            v1[x[i]-'a']++;
        }
        for(int i=0;i<y.size();i++){
            v2[y[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]==0 and v2[i]!=0 or v2[i]==0 and v1[i]!=0){
                return false;
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};