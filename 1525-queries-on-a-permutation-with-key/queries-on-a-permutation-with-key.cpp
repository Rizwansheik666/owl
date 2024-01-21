class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        vector<int>dq;
        vector<int>v;
        for(int i=1;i<=m;i++){
            dq.push_back(i);
        }
        for(int i=0;i<q.size();i++){
            if(q[i]<=m){
                int f = find(dq.begin(),dq.end(),q[i]) - dq.begin();
                v.push_back(f);
                dq.erase(dq.begin() + f);
                dq.insert(dq.begin(), q[i]);
            }
        }
        return v;
    }
};