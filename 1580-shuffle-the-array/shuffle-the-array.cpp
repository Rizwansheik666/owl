class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        int k=n;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
            v.push_back(nums[k]);
            k++;
        }
        return v;
    }
};