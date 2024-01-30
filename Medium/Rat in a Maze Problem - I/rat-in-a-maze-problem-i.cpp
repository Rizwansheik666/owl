//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>v;
    void fun(int i,int j,int n,int m,vector<vector<int>> &mat,int N,string s)
    {
        if(i<0 || j<0 || i>=N || j>=N || mat[i][j]==0)
        return;
        if(i==N-1 && j==N-1)
        {
            v.push_back(s);
            return;
        }
        mat[i][j]=0;
        fun(i+1,j,n,m,mat,N,s+'D');
        fun(i,j-1,n,m,mat,N,s+'L');
        fun(i,j+1,n,m,mat,N,s+'R');
        fun(i-1,j,n,m,mat,N,s+'U');
        mat[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        fun(0,0,0,0,m,n,"");
        return v;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends