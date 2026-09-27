class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int>st(nums.begin(),nums.end());
        vector<int>tp;
        for(auto l:st) tp.push_back(l);
        int cnt=0,temp=1,pr=tp[0];
        for(int i=1;i<tp.size();i++){
            if((tp[i]-pr)==1){
                pr=tp[i];
                temp++;
            }
            else{
                cnt=max(cnt,temp);
                pr=tp[i];
                temp=1;
            }
        }
        cnt=max(cnt,temp);
        return cnt;
    }
};