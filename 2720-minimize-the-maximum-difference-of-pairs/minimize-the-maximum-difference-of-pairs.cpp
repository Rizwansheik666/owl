static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        
        int left = 0, right = nums.back() - nums.front();
        // cout<<right<<" ";
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            cout<<mid;
            if (canFormPairs(nums, mid, p)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    bool canFormPairs(const vector<int>& nums, int maxDiff, int p) {
        int pairs = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] <= maxDiff) {
                pairs++;
                i++;
            }
            if (pairs >= p) return true;
        }
        return pairs >= p;
    }
};