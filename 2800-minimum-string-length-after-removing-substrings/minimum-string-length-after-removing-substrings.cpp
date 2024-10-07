class Solution {
public:
    int minLength(string s) {
        int i=0,j=1;
        while(j<=s.size()){
            if(s[i]=='A' and s[j]=='B' or s[i]=='C' and s[j]=='D'){
                s.erase(j,1);
                s.erase(i,1);
                i=0,j=1;
            }
            else{
                i++;
                j++;
            }
        }
        return s.size();
    }
};