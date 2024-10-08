class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() and st.top()=='(')st.pop();
                else cnt++;
            }
        }
        cnt+=st.size();
        return cnt;
    }
};