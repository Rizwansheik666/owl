class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v;
        int sum=0,sum1=0;
        for(int i=0;i<pref.size();i++){
            sum=sum1^pref[i];
            sum1^=sum;
            v.push_back(sum);
        }
        return v;
    }
};