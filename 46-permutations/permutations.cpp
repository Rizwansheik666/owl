class Solution {
public:
    void Func(int n,vector<int> &nums,vector<int>frq,vector<vector<int>>&ans,vector<int> ds){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(!frq[i]){
                ds.push_back(nums[i]);
                frq[i]=1;
                Func(n,nums,frq,ans,ds);
                ds.pop_back();
                frq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>frq(nums.size(),0);
        Func(nums.size(),nums,frq,ans,{});
        return ans;
    }
};