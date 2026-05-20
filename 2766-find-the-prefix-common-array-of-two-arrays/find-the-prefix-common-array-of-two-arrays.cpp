class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        map<int,int>mp;
        if(A[0]==B[0]){
            ans.push_back(1);
        }
        else{
            ans.push_back(0);
        }
        mp[A[0]]++;
        mp[B[0]]++;
        for(int i=1;i<A.size();i++){
            mp[A[i]]++;
            mp[B[i]]++;
            int cnt=0;
            for(auto l:mp){
                if(l.second==2)cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};