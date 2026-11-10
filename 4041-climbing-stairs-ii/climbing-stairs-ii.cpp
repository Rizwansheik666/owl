class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=3 && j<=i;j++){
                int i2=i-j;
                int Tot=dp[i2] + costs[i-1] + j*j;
                dp[i]=min(dp[i],Tot);
            }
        }
        return dp[n];
    }
};