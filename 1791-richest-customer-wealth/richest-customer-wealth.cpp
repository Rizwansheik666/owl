class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int cnt=0,n=accounts.size();
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<accounts[0].size();j++){
                temp+=accounts[i][j];
            }
            cnt=max(cnt,temp);
            temp=0;
        }
        return cnt;
    }
};