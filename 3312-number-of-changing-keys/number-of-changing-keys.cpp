class Solution {
public:
    int countKeyChanges(string s) {
        int i=0,j=i+1,cnt=0;
        while(j<s.size()){
            if(tolower(s[i])!=tolower(s[j])){
                cnt++;
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return cnt;
    }
};