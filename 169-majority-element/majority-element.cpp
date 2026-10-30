class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>mp;
        for(auto l:nums){
            mp[l]++;
        }
        for(auto l:mp){
            if(l.second>n) return l.first;
        }
        return 0;
    }
};