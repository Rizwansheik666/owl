class Solution {
  public:
    int maxTask(vector<int>& h, vector<int>& l) {
        // code here
        int len=h.size();
        vector<int>dp(len+2);
        for(int i=0;i<len;i++){
            dp[i+2]=max(h[i]+dp[i],l[i]+dp[i+1]);
        }
        return dp[len+1];
    }
};