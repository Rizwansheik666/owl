//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int cnt=0;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==1)cnt++;
            }
            mp[i]+=cnt;
        }
        int res=-1,prev=-1;
        for(auto it:mp){
            // cout<<it.first<<" "<<it.second<<endl;
            if(it.second>prev and it.second!=0){
                res=it.first;
                prev=it.second;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends