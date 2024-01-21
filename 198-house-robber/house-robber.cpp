static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    int fun(int i,int n,vector<int>& nums,vector<int>&dp) {
        if (i >= n) {
            return 0;
        }
        if(dp[i]!=-1)return dp[i];

        int pick=nums[i]+fun(i+2,n,nums,dp);
        int nopick=fun(i+1,n,nums,dp);
        return dp[i]=max(pick,nopick);
    }
    
    int rob(vector<int>& nums) {
        int n =nums.size();
        vector<int>dp(n+1,-1);
        return fun(0, n, nums,dp);
    }
};