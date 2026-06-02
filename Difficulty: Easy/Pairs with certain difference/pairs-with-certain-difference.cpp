class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        if(arr.size()<=1)return 0;
        priority_queue<int>pq;
        
        for(auto it:arr)pq.push(it);
        
        int ans=0;
        
        while(pq.size()>1){
            int l=pq.top();pq.pop();
            if(l-pq.top()<k){
                ans+=(l+pq.top());
                pq.pop();
            }
        }
        return ans;
    }
};