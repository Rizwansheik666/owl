class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
        }
        int k=0;
        for(int i=0;i<jewels.size();i++){
            for(auto t:mp){
                if(t.first==jewels[i]) k+=t.second;
            }
        }
        return k;
    }
};