class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        if(n>m) return false;
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[i]) return false;
        }
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[m-n+i]) return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    cnt++;
                };
            }
        }
        return cnt;
    }
};