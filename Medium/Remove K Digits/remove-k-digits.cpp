//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
    deque<char> st;
    st.push_back(S[0]);
    for (int i = 1; i < S.length(); i++) {
        while(!st.empty() and K > 0 and st.back()>S[i]) {
            st.pop_back();
            K--;
        }
        if(S[i]=='0' and st.empty()) continue;
        st.push_back(S[i]);
    }
   // for(auto it:st) cout<<it<<" ";
    while (K > 0 and !st.empty()) {
        st.pop_back();
        K--;
    }
    string ans = "";
        if(st.empty()){
        return "0";
    }
    while (!st.empty()) {
        ans += st.front();
        
        st.pop_front();
    }
    // int i = 0;
    // while (i < ans.size() and ans[i] == '0') {
    //     i++;
    // }
    // ans=ans.substr(i);

    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends