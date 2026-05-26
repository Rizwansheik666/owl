class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
         int n=arr.size(),sum=accumulate(arr.begin(),arr.end(),0);
        int ans=n-sum,left=0;
        for(int i=0;i<n;++i)
        {
            left+=arr[i];
            sum-=arr[i];
            ans=min(ans,left+n-i-1-sum);
        }
        return ans;
    }
};