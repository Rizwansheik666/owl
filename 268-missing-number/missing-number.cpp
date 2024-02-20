class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            cnt1+=nums[i];
            cnt2+=i+1;
        }
        return cnt2-cnt1;
    }
};