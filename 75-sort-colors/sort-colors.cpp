class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=1;
        while(i<nums.size()-1){
            if(nums[i]>nums[j]) swap(nums[i],nums[j]);
            
            j++;
            if(j>=nums.size()){
                i++;
                j=i+1;
            }
        }
        return;
    }
};