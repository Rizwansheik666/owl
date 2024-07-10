class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(!st.empty()){
                if(operations[i]=="C"){
                    st.pop();
                }
                else if(operations[i]=="D"){
                    st.push(2*st.top());
                }
                else if(operations[i]=="+"){
                    int k=st.top();
                    st.pop();
                    int l=st.top();
                    st.push(k);
                    st.push(k+l);
                }
                else{
                    st.push(stoi(operations[i]));
                }
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int cnt=0;
        while(!st.empty()){
            cnt+=st.top();
            st.pop();
        }
        return cnt;
    }
};