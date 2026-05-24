class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        // int n=arr.size();
        // if(n==1)return arr[0];
        // if(n%2!=0) return arr[n/2];
        
        return arr[0];
        
    }
};