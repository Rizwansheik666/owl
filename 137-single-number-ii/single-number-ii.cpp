static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v(32,0);
        for(int i=0;i<nums.size();i++){
            for (int j=0;j<32;j++) {
                if ((nums[i]&(1<<j))!=0){
                    v[j]+=1; 
                }
            }
        }
        int res=0;
        for(int i=0;i<32;i++){
            if (v[i]%3!=0) {
                res|=(1<<i);
            }
        }
        return res;
    }
};