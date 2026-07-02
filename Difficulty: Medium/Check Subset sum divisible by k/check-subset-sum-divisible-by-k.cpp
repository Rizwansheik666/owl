class Solution {
  public:
    vector<vector<int>>dp;
    bool subset(int ind,vector<int>& arr,int k,int cnt,bool tk){
        if(ind==arr.size()){
            return tk and cnt==0;
        }
        if(dp[ind][cnt]!=-1) return dp[ind][cnt];
        
        bool pick=subset(ind+1,arr,k,(cnt+arr[ind])%k,true);
        
        bool NoPick=subset(ind+1,arr,k,cnt,tk);
        
        return dp[ind][cnt]=pick||NoPick;
        
    }
    bool divisibleByK(vector<int>& arr, int k) {
        // code here
        dp.assign(arr.size(),vector<int>(k,-1));
        return subset(0,arr,k,0,false);
    }
};