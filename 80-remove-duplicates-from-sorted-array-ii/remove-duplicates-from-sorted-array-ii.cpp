class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto l:mp){
            if(l.second<=2){
                for(int i=0;i<l.second;i++){
                    nums.push_back(l.first);
                }
            }
            else{
                for(int i=0;i<2;i++){
                    nums.push_back(l.first);
                }
            }
        }
        return nums.size();
    }
};