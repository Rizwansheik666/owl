class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        map<int,vector<int>>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;
        for(auto it:mp)mpp[it.second].push_back(it.first);
        for(auto it:mpp){
            for(int i=it.second.size()-1;i>=0;i--){
                for(int j=0;j<it.first;j++){
                    ans.push_back(it.second[i]);
                }
            }
        }
        return ans;
    }
};