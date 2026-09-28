class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int cnt=0,temp=0;
        for(auto l:s){
            if(!st.empty()){
                if(l==')'){
                    cnt=max(cnt,temp);
                    temp--;
                    st.pop();
                }
                else if(l=='('){
                    st.push(l);
                    temp++;
                }
            }
            else if(l=='('){
                st.push(l);
                temp++;
            }
        }
        cnt=max(cnt,temp);
        return cnt;
    }
};