class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto m:nums){
            res^=m;
        }
        return res;
    }
};