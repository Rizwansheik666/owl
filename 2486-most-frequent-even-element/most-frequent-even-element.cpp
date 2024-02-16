class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int cnt=0,ele=-1;
        for(auto l:mp){
            if(cnt<l.second){
                cnt=l.second;
                ele=l.first;
            }
        }
        return ele;
    }
};