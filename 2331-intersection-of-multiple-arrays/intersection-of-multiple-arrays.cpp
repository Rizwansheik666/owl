class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        map<int,int>mp;
        int m=nums.size();
        for(int i=0;i<m;i++){
            int n=nums[i].size();
            for(int j=0;j<n;j++){
                mp[nums[i][j]]++;
            }
        }
        for(auto it:mp){
            if(it.second==m) v.push_back(it.first);
        }
        return v;
    }
};