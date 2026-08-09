class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int temp=nums[0],i=0;
        while(i<nums.size()){
            if(nums[i]!=temp){
                ans.push_back(temp);
                temp++;
            }
            else{
                i++;
                temp++;
            }
        }
        return ans;
    }
};