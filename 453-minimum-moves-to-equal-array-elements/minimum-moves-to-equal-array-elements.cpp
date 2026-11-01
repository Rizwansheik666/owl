class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minCnt=INT_MAX;
        int TotCnt=0;
        int n=nums.size();
        for(int l:nums){
            minCnt=min(l,minCnt);
            TotCnt+=l;
        }
        return TotCnt-n*minCnt;
    }
};