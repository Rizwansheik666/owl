class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for (const auto& row : grid) {
        for (int value : row) {
            if (value < 0) {
                cnt++;
            }
        }
    }
        return cnt;
    }
};