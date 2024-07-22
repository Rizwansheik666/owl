class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>row,col;
        for(int i=0;i<grid.size();i++){
            vector<int>rowv;
            vector<int>colv;
            for(int j=0;j<grid.size();j++){
                rowv.push_back(grid[i][j]);
                colv.push_back(grid[j][i]);
            }
            row[rowv]++;
            col[colv]++;
        }
        int cnt=0;
        for(auto it:row){
            for(auto it2:col){
                if(it.first==it2.first){
                    cnt+=it.second*it2.second;
                }
            }
        }
        return cnt;

    }
};