class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>st;
        int j = 1;
        
        for (int i = 0; i < target.size(); i++) {
            while (j < target[i]) {
                st.push_back("Push");
                st.push_back("Pop");
                j++;
            }
            st.push_back("Push");
            j++;
        }
        return st;
    }
};