//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        // vector<int>v(n,0);
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(a[i][j]==1) c++;
            }
            if(mpp.find(c)==mpp.end()) mpp[c]=i+1;
            
            
        }
        
        // int res = 1e9, ans = 0;
        // for(int i = 0; i < n; i++){
        //     if(res>=v[i] ){
        //         res=v[i];
        //         ans = i;
        //     }
        // }
        // if(res==0)return 1;
        auto it = mpp.begin();
        return mpp.empty()?1:it->second;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends