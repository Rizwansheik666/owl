static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();


class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>ans;
        set<pair<int,int>>st;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int l;
            if(n==0)l=1;
            else l=log10(n)+1;
            int samp=0;
            while(l--){
                int pr=pow(10,l);
                int sn=n/pr;
                cout<<sn<<" ";
                samp=(samp*10)+mapping[sn];
                n%=pr;
            }
            st.insert({samp,i});
            cout<<endl;
        }
        for(auto it:st){
            ans.push_back(nums[it.second]);
        }
        return ans;
    }
};