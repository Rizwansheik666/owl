class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;
       nums.push_back(target);
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            ans=i;
            break;
        }
       }
       return ans;
    }
};