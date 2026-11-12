class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int IncAns=1;
        int DecAns=1;
        int IncTem=1;
        int DecTem=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                DecAns=max(DecAns,DecTem);
                DecTem=1;
                IncTem++;
            }
            else if(nums[i]>nums[i-1]){
                IncAns=max(IncAns,IncTem);
                IncTem=1;
                DecTem++;
            }
            else{
                DecAns=max(DecAns,DecTem);
                DecTem=1;
                IncAns=max(IncAns,IncTem);
                IncTem=1;
            }
        }
        DecAns=max(DecAns,DecTem);
        IncAns=max(IncAns,IncTem);
        return max(DecAns,IncAns);
    }
};