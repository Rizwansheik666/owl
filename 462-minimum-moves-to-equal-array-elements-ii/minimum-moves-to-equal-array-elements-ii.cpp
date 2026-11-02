class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        // int t=nums[n/2];
        for(int l:nums){
            if(l!=nums[n/2]){
                ans+=abs(l-nums[n/2]);
            }
        }
        return ans;
    }
};