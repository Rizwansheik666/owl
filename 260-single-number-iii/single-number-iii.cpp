class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int k=0;
       for(auto p:nums){
           k^=p;
       }
       int i=__builtin_ffs(k);
        i=1<<(i-1);
       int x=0,y=0;
       for(auto l:nums){
           if(l&i) x^=l;
           else y^=l;
       }
       return {x,y};
    }
};