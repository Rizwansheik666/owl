class Solution {
public:
    void helper(int n,int k,int l,vector<vector<int>>&v,vector<int>&temp){
        if(l > n){
            if(k==0){
                v.push_back(temp);
            }
            return;
        }
        if(l<=n){
            temp.push_back(l);
            helper(n,k-1,l+1,v,temp);
            temp.pop_back();
        }
        helper(n,k,l+1,v,temp);
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>v;
        vector<int>temp;
        helper(n,k,1,v,temp);
        return v;
    }
};