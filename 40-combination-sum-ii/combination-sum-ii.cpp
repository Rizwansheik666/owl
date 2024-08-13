class Solution {
public:
    void backtrack(vector<int>& vals, int t, int st, vector<int>& temp, vector<vector<int>>& ans) {
        if (t == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = st; i < vals.size(); i++) {
            if (i > st && vals[i] == vals[i - 1]) continue; 
            if (vals[i] > t) break;  
            temp.push_back(vals[i]);
            backtrack(vals, t - vals[i], i + 1, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, temp, ans);
        return ans;
    }
};
