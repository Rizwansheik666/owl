static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();


class Solution {
public:
    void Func(int idx,int cnt,int n,int t,vector<int>& cand,vector<vector<int>>& ans,vector<int>ds){
        if(cnt==t){
            ans.push_back(ds);
            return;
        }
        if(idx>=n || cnt>=t) return;
        ds.push_back(cand[idx]);
        cnt+=cand[idx];
        Func(idx,cnt,n,t,cand,ans,ds);
        ds.pop_back();
        cnt-=cand[idx];
        Func(idx+1,cnt,n,t,cand,ans,ds);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        Func(0,0,candidates.size(),target,candidates,ans,{});
        return ans;
    }
};