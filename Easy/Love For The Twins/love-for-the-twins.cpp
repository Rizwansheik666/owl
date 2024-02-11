//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getTwinCount(int N , int Arr[]) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            mp[Arr[i]]++;
        }
        int cnt=0;
        for(auto l:mp){
            cnt+=l.second/2;
        }
        return cnt*2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int Arr[N];
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.getTwinCount(N,Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends