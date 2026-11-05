
static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)nums[i]=nums[i]*nums[i];
        sort(nums.begin(),nums.end());
        return nums;
    }
};