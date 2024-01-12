class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||      c=='O'||c=='I'||c=='U'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        // vector<char>v1;
        // vector<char>v2;
        int t=s.size();
        int v1=0,v2=0;
        for(int i=0;i<t/2;i++){
            if(isVowel(s[i])){
                v1++;
            }
        }
        for(int i=t/2;i<t;i++){
            if(isVowel(s[i])){
                v2++;
            }
        }
        if(v1==v2){
            return true;
        }
        return false;
    }
};