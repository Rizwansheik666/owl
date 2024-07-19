class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v1,v2;
        for(int i=0;i<matrix.size();i++){
            int x=INT_MAX;
            for(int j=0;j<matrix[0].size();j++) x=min(x,matrix[i][j]);
            v1.push_back(x);
        }
        for(int i=0;i<matrix[0].size();i++){
            int y=INT_MIN;
            for(int j=0;j<matrix.size();j++) y=max(y,matrix[j][i]);
            v2.push_back(y);
        }vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==v1[i] and matrix[i][j] == v2[j]) ans.push_back(matrix[i][j]); 
            }
        }return ans;
    }
};