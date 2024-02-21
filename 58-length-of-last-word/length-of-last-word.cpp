class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(cnt==0 and s[i]==' ') cnt=0;
            else if(cnt!=0 and s[i]==' ') break;
            else cnt++;
        }
        return cnt;
    }
};