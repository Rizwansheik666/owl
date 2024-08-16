class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int sm=arrays[0][0],lr=arrays[0].back(),max_d=0;
        for(int i=1;i<arrays.size();i++){
            max_d=max(max_d,abs(arrays[i].back()-sm));
            max_d=max(max_d,abs(lr-arrays[i][0]));
            sm=min(sm,arrays[i][0]);
            lr=max(lr,arrays[i].back());
        }
        return max_d;
    }
};