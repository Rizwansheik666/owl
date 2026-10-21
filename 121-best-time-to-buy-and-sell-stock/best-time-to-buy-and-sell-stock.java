class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        if(n<2) return 0;
        int[] dp= new int[n];
        dp[0]=0;
        int minP=prices[0];
        for(int i=1;i<n;i++){
            minP = Math.min(minP, prices[i]);
            int profit = prices[i] - minP;
            dp[i] = Math.max(dp[i-1], profit);
        }
        return dp[n-1];
    }
}