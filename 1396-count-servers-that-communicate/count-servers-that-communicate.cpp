class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& grid,     vector<vector<int>>& visit,int& curr){
        visit[r][c]=1;
        curr++;

        int row=grid.size();
        int col=grid[0].size();

        for(int j=c+1;j<col;j++){
            if(grid[r][j]==1){
                if(!visit[r][j])dfs(r,j,grid,visit,curr);
            }
        }

        for(int j=c-1;j>=0;j--){
            if(grid[r][j]==1){
                if(!visit[r][j])dfs(r,j,grid,visit,curr);
            }
        }

        for(int i=r+1;i<row;i++){
            if(grid[i][c]==1){
                if(!visit[i][c])dfs(i,c,grid,visit,curr);
            }
        }

        for(int i=r-1;i>=0;i--){
            if(grid[i][c]==1){
                if(!visit[i][c])dfs(i,c,grid,visit,curr);
            }
        }
    }
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int TotCom=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and !visit[i][j]){
                    int curr=0;
                    dfs(i,j,grid,visit,curr);
                    if(curr>1)TotCom+=curr;
                }
            }
        }
        return TotCom;
    }
};