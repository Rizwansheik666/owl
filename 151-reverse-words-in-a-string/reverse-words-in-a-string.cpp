static const auto _ = [](){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                if(!temp.empty()){
                    st.push(temp);
                    temp="";
                }
            }
        }
        if(!temp.empty()){
            st.push(temp);
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()){
                res+=' ';
            }
        }
        return res;
    }
};