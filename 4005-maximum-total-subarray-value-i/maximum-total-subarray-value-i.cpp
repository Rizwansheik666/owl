class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ans=abs(nums[nums.size()-1]-nums[0]);
        long long ans2=ans*k;
        return ans2;
    }
};