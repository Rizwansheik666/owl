//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) { 
     //complete the function here
     map<char,int>mp;
     for(int i=0;i<S.size();i++){
         mp[S[i]]++;
     }
     int cnt=0;
     for(auto l:mp){
         if(l.second>1){
             cnt+=l.second-1;
         }
     }
     return cnt;
} 
