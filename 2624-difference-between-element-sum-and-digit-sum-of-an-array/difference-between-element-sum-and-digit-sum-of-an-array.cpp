class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            cnt1+=nums[i];
            if(nums[i]>9){
                int k=nums[i];
                while(k!=0){
                    cnt2 += k % 10;
                    k = k / 10;
                }
            }
            else{
                cnt2+=nums[i];
            }
        }
        return abs(cnt1-cnt2);
    }
};