static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                row[i] += grid[i][j];
                col[j] += grid[i][j];
                
            }
        }
        
        vector<vector<int>> res(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            int y = row[i];
            for(int j=0;j<m;j++)
            {
                int x = y+col[j];
                res[i][j]+=x-(n+m-x);
            }
        }
        
        return res;
    }
};
