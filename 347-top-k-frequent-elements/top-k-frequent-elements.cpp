class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(auto l:nums){
            mp[l]++;
        }
        vector<pair<int,int>>pr;
        for(auto p:mp){
            pr.push_back({p.second,p.first});
        }
        sort(pr.rbegin(),pr.rend());
        for(int i=0;i<k;i++){
            ans.push_back(pr[i].second);
        }
        return ans;
    }
};