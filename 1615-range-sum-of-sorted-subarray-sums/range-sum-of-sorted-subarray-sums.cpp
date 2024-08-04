static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();


class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        int i=0,j=0;
        int prev=0;
        while(i<n){
            if(j<n){
                prev+=nums[j];
                v.push_back(prev);
                j++;
            }
            else if(j>=n){
                i++;
                j=i;
                prev=0;
            }
        }
        sort(v.begin(),v.end());
        long long cnt=0;
        int MOD=1e9+7;
        for(int i=left-1;i<right;i++){
            cnt=(cnt+v[i])%MOD;
        }
        return cnt;
    }
};