class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            for(auto t:mp){
                if(nums[i]>t.first) cnt+=t.second;
            }
            v.push_back(cnt);
        }
        return v;
    }
};