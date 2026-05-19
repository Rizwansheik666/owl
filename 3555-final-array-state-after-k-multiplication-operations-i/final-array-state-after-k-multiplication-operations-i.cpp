class Solution {
public:

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int temp=INT_MAX,ind=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<temp){
                    temp=nums[i];
                    ind=i;
                }
            }
            nums[ind]=temp*multiplier;
        }
        return nums;
    }
};