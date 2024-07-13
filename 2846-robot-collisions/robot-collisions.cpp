class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        map< int, int >mp;
        for(int i=0;i<positions.size();i++){
            mp[positions[i]]=i;
        }
        stack<pair<int,int>>st;
        for(auto it:mp){
            int hel=healths[it.second];
            char dir=directions[it.second];
            int idx=it.second;
            while(!st.empty() and directions[st.top().second]=='R' and dir=='L'){
                    if(st.top().first<hel){
                        st.pop();
                        hel--;
                    }
                    else if(st.top().first>hel){
                        auto top = st.top();
                        st.pop();
                        top.first--; 
                        st.push(top);
                        hel = 0;  
                        break;
                    }
                    else{
                        hel=0;
                        st.pop();
                        break;
                    }
                }
                if(hel>0){
                    st.push({hel,idx});
                }
        }
        vector<int> result(positions.size(), 0);
        while (!st.empty()) {
            result[st.top().second] = st.top().first;
            st.pop();
        }
        vector<int> final_result;
        for (int h : result) {
            if (h > 0) {
                final_result.push_back(h);
            }
        }
        return final_result;
    }
};