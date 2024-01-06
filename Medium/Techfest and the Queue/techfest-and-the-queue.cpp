//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int prime(int n){
        int c=0;
        while(n%2==0){
            c++;
            n=n/2;
        }
        for(int i=3;i<=sqrt(n);i++){
            while(n%i==0){
                c++;
                n=n/i;
            }
        }
        if(n>2){
            c++;
        }
        return c;
    }
	int sumOfPowers(int a, int b){
	    int c=0;
	    for(int i=a;i<=b;i++){
	        c+=prime(i);
	    }
	    return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends