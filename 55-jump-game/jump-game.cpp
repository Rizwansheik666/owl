class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(i>cnt) return false;
            cnt=max(cnt,i+nums[i]);
        }
        return true;
    }
};