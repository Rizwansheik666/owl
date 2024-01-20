static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto m:nums){
            res^=m;
        }
        return res;
    }
};