class Solution {
public:
    int solve(vector<int>& nums, int target, int i, vector<int>& dp) {
        int n = nums.size();

        if (i == n - 1) return 0;

        if (dp[i] != -2) return dp[i];

        int ans = -1;

        for (int j = i + 1; j < n; j++) {
            int diff = nums[j] - nums[i];

            if (-target <= diff && diff <= target) {
                int next = solve(nums, target, j, dp);

                if (next != -1) {
                    ans = max(ans, 1 + next);
                }
            }
        }

        return dp[i] = ans;
    }

    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> dp(n, -2);

        return solve(nums, target, 0, dp);
    }
};