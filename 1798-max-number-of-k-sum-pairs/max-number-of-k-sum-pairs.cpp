class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1,cnt=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                cnt++;
            }
            else if(nums[i]+nums[j]>k){
                j--;
            }
            else{
                i++;
            }

        }
        return cnt;
    }
};