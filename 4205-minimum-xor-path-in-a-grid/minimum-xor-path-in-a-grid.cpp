class Solution {
public:
    vector<vector<vector<int>>>dp;
    int Func(int i,int j,vector<vector<int>>& grid,int cnt,int n,int m){
        if(i>=n or j>=m) return INT_MAX;
        cnt^=grid[i][j];
        if(i==n-1 and j==m-1) return cnt;
        if(dp[i][j][cnt]!=-1)return dp[i][j][cnt];
        int r=Func(i,j+1,grid,cnt,n,m);
        int d=Func(i+1,j,grid,cnt,n,m);
        return dp[i][j][cnt]=min(r,d);
    }
    int minCost(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        dp=vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(1024,-1)));
        return Func(0,0,grid,0,n,m);
    }
};