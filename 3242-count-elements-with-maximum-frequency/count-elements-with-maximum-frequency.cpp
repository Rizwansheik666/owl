class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        map<int,int>mp2;
        for(auto l:mp){
            mp2[l.second]++;
        }
        vector<int>v;
        for(auto p:mp2){
            int k=p.first*p.second;
            v.push_back(k);
        }
        return v[v.size()-1];
    }
};