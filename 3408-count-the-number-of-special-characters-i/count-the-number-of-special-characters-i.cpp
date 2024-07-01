class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>st;
        for(int i=0;i<word.size();i++){
            st.insert(word[i]);

        }
        map<char,int>mp;
        for(auto c:st){
            char p=tolower(c);
            mp[p]++;
        }
        int cnt=0;
        for(auto l:mp){
            if(l.second>=2) cnt++;
        }
        return cnt;
    }
};