class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v{nums[0]};
        // int k=0;
        for(int i=1;i<nums.size();i++){
            if(v[v.size()-1]<nums[i]){
                v.push_back(nums[i]);
            }
            else{
                int z=(lower_bound(v.begin(),v.end(),nums[i]))-v.begin();
                v[z]=nums[i];
            } 
        }
        return v.size();
    }
};