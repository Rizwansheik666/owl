class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxNum=0;
        int cnt=0;
        for(auto l:nums){
            maxNum=max(maxNum,l);
            cnt+=l;
        }
        return ((maxNum*nums.size())-cnt);
    }
};