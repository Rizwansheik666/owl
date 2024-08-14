static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int low = 0, high = nums.back() - nums.front();
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;
            int j = 0;
            for (int i = 0; i < nums.size(); i++) {
                while (j < nums.size() && nums[j] - nums[i] <= mid) {
                    j++;
                }
                count += j - i - 1;  
            }
            
            if (count < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};
