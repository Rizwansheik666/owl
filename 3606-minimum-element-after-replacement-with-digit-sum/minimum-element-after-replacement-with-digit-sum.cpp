class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(auto l:nums){
            int temp=l;
            int st=0;
            while(temp){
                int k=temp%10;
                st+=k;
                temp/=10;
            }
            ans=min(st,ans);
        }
        return ans;
    }
};