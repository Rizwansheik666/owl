static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int mpel=0,maxc=0;
        for(auto l:mp){
            //cout<<l.first<<" "<<l.second<<endl;
            if(l.second > maxc) {
                maxc=l.second;
                mpel=l.first;
            }
        }
        return mpel;
    }
};