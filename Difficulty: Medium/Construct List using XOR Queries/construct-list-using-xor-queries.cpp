class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        vector<int>ans;
        ans.push_back(0);
        int xr=0;
         for (auto &q : queries) {
            if (q[0] == 0) {
                ans.push_back(q[1] ^ xr);
            } else {
                xr ^= q[1];
            }
        }

        for (int &x : ans) {
            x ^= xr;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
