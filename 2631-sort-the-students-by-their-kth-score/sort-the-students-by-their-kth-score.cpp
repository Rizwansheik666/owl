class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int row=score.size(),col=score[0].size();
        vector<vector<int>>ans(row,vector<int>(col));
        vector<pair<int,int>>v(row);
        for(int i=0;i<row;i++){
            v[i]={score[i][k],i};
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<row;i++){
            ans[i]=score[v[i].second];
        }
        return ans;
    }
};