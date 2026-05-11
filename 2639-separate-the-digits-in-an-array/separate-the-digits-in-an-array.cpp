class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                ans.push_back(nums[i]);
            }
            else{
                string s=to_string(nums[i]);
                for(int j=0;j<s.size();j++){
                    int p=s[j]-'0';
                    ans.push_back(p);
                }
            }
            
        }
    return ans;
    }
};