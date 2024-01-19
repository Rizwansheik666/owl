class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
         int n = m.size();
        vector<vector<int>>v(n, vector<int>(n, 0));
        int k = INT_MAX;
        for (int i=0;i<n;i++) {
            v[0][i] =m[0][i];
        }
        for (int i=1;i<n;i++) {
            for (int j=0;j<n;j++) {
                if(j==0) {
                    v[i][j]=min(v[i-1][j],v[i-1][j+1])+m[i][j];
                }
                else if(j==n-1){
                    v[i][j]=min(v[i-1][j], v[i-1][j-1])+m[i][j];
                }
                else {
                    v[i][j]=min(v[i-1][j],min(v[i-1][j-1],v[i-1][j+1]))+m[i][j];
                }
            }
        }
        int minSum=INT_MAX;
        for (int i=0;i<n;i++) {
            minSum=min(minSum,v[n-1][i]);
        }
        return minSum;
    }
};