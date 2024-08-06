//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        stack<int>st;
        string temp="";
        str+='.';
        int c=0;
         for (int i = 0; i < str.size(); i++) {
             if(str[i]=='.'){
                 if(temp.size()==0 or
                 (temp[0]=='0' and temp.size()>1) or
                 (temp.size()>=3 and temp>"255")) return false; 
                 c++;
                 temp="";
             }
             else temp+=str[i];
        }
        
        return c==4? true:false;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends