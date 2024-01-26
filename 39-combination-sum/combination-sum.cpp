class Solution {
public:
    vector<vector<int>>res;
    vector<int>temp;
    void helper(vector<int>&candidates,int T,int i){
         if(T<0 or i==candidates.size()){
            return;
        }
        if(T==0){
            res.push_back(temp);
            return;
        }
       
        if(candidates[i]<=T){
            temp.push_back(candidates[i]);
            helper(candidates,T-candidates[i],i);
            temp.pop_back();
        }
        helper(candidates,T,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0);
        return res;
    }
};