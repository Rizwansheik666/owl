class Solution {
public:
    bool isballoon(char x){
        if(x=='b' or x=='a' or x=='l' or x=='o' or x=='n') return true;
        return false;
    }
    int maxNumberOfBalloons(string text) {
        int ans=0;
        map<char,int>mp;
        for(auto l:text){
            if(isballoon(l)) mp[l]++;
        }
        return min({mp['b'],mp['a'],mp['l'] / 2,mp['o'] / 2,mp['n']});
    }

};