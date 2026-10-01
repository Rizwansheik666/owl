class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto l:s){
            if(!st.empty()){
                if((l==')' and st.top()=='(') or
                    (l=='}' and st.top()=='{') or
                    (l==']' and st.top()=='[')){
                    st.pop();
                }
                else{
                    st.push(l);
                }
            }
            else{
                st.push(l);
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};