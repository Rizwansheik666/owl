class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>sm;
        vector<int>lr;
        vector<int>mi;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                sm.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                lr.push_back(nums[i]);
            }
            else{
                mi.push_back(nums[i]);
            }
        }
        for(auto l:sm){
            ans.push_back(l);
        }
        for(auto l:mi){
            ans.push_back(l);
        }
        for(auto l:lr){
            ans.push_back(l);
        }
        return ans;
    }
};