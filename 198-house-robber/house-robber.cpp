class Solution {
public:
    int Func(int i,int n,vector<int>& nums,vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=nums[i]+Func(i+2,n,nums,dp);
        int Nopick=Func(i+1,n,nums,dp);
        return dp[i]=max(pick,Nopick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return Func(0,nums.size(),nums,dp);
    }
};