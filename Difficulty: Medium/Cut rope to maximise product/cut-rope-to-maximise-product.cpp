class Solution {
  public:
    vector<int>dp;
    int solve(int n){
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        for(int i=1;i<n;i++){
            int left =max(i,solve(i));
            int right= max(n-i,solve(n-i));
            
            ans=max(ans,left*right);
        }
        return dp[n]=ans;
    }
    int maxProduct(int n) {
        // code here
        dp.assign(n+1,-1);
        int ans=0;
        for(int i=1;i<n;i++){
            int left =max(i,solve(i));
            int right= max(n-i,solve(n-i));
            
            ans=max(ans,left*right);
        }
        return ans;
        
    }
};