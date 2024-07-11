class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int val=1,cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
            else{
                val*=nums[i];
            }
        }
        vector<int>v(n,0);
        if(cnt>1){ 
            return v;
        }
        else if(cnt==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    v[i]=val;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                v[i]=val/nums[i];
            }
        }
        return v;
    }
};