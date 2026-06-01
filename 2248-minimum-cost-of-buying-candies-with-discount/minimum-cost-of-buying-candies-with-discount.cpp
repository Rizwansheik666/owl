class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0,cnt=0;
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=0;i--){
            if(cnt!=2){
                ans+=cost[i];
                cnt++;
            }
            else{
                cnt=0;
            }
        }
        return ans;
    }
};