static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();
class Solution {
public:    
    int rob(vector<int>& nums) {
        int n = nums.size();
        int iplus1 = 0;
        int iplus2 = 0;

            for(int i = n-1; i >= 0; i--)
            {
                int curi = nums[i] + iplus2;
                curi = max(curi, iplus1);
                iplus2 = iplus1;
                iplus1 = curi;
            }
            return iplus1;
    }
};