//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]>='a' and s[i]<='z' or s[i]=='-'){
                return -1;
            }
        }
        int k=0,flag=0;
        if(s[0]=='-'){
            flag =1;
        }
        for(int i=0;i<n;i++){
            if(s[i]!='-' and s[i]!='+'){
                k = k*10 + (s[i]-'0');
            }
        }
        if(flag==1){
            return -k;
        }
        return k;
        //Your code here
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends