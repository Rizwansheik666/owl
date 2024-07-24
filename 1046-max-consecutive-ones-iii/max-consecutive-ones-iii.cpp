class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,z=0,o=0,cnt=0;
        while(j<nums.size()){
            if(nums[j]==0) z++;
            else o++;

            while(k<z){
                if(nums[i]==0)z--;
                else o--;
                i++;
            }
            cnt=max(cnt,j-i+1);
            j++;
        }
        return cnt;
    }
};