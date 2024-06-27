class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<2;j++){
                mp[edges[i][j]]++;
                if(mp[edges[i][j]] == edges.size()) return edges[i][j];
            }
        }
        return 0;
    }
};