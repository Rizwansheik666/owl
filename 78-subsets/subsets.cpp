class Solution {
public:
    void Func(int idx,int n,vector<int>nums,vector<int>ds,vector<vector<int>> &ans){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        Func(idx+1,n,nums,ds,ans);
        ds.push_back(nums[idx]);
        Func(idx+1,n,nums,ds,ans);
        ds.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        Func(0,nums.size(),nums,{},ans);
        return ans;
    }
};