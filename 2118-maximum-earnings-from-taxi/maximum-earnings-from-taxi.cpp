static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
    
public:
    long long dp[100001];
    long long fun(int i, vector<vector<int>>& v, int n) {
        if (i >= n) return 0;

        if (dp[i] != -1) return dp[i];
        long long p = 0, q = 0;
        int idx = lower_bound(v.begin(), v.end(), vector<int>{v[i][1], 0, 0}) - v.begin();

        p = v[i][2] + v[i][1] - v[i][0] + fun(idx, v, n);
        q = fun(i + 1, v, n);

        return dp[i] = max(p, q);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(begin(rides), end(rides));
        int s = rides.size();
        memset(dp, -1, sizeof(dp));
        return fun(0, rides, s);
    }
};
