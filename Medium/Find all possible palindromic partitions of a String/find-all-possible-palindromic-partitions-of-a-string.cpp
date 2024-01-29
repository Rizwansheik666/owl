//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void fun(int idx,string &s,int n,vector<string>&temp,vector<vector<string>>&v){
        if(idx==n){
            v.push_back(temp);
            return;
        }
        for(int i=idx;i<n;i++){
            string str=s.substr(idx,i-idx+1);
            if(str==string(str.rbegin(),str.rend())){
                temp.push_back(str);
                fun(i+1,s,n,temp,v);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<vector<string>>v;
        vector<string>temp;
        int n=s.size();
        fun(0,s,n,temp,v);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends