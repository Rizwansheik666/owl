class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>k;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto l:mp){
            int t=l.second;
            k.insert(t);
        }
        return k.size() == mp.size();
        return false;
    }
};