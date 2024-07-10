class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../"){
                if(!st.empty()) st.pop();
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                st.push(logs[i]);
            }
        }
        // int cnt=0;
        // while(!st.empty()){
        //     st.pop();
        //     cnt++;
        // }
        return st.size();
    }
};