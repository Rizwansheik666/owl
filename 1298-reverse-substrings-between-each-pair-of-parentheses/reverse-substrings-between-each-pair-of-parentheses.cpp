class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string ans = "";
        for (char c : s) {
            if (c == '(') {
                st.push(ans);
                ans = "";
            } 
            else if (c == ')') {
                reverse(ans.begin(), ans.end());
                if (!st.empty()) {
                    ans = st.top() + ans;
                    st.pop();
                }
            }
            else {
                ans += c;
            }
        }

        return ans;
    }
};