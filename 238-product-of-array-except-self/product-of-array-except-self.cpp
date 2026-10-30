class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=1;
        int p=0;
        vector<int>ans;
        for(int l:nums){
            if(l!=0) n*=l;
            else p++;
        }
        for(int l:nums){
            if(p<=0){
                int temp=n/l;
                ans.push_back(temp);
            }
            else{
                if(l==0 and p<=1)ans.push_back(n);
                else ans.push_back(0);
            }
        }
        return ans;
    }
};