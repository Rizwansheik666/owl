//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int ans(int n){
            int a=0,b=0,c=0;
            if((n/2)+(n/3)+(n/4)>n){
                a=ans(n/2);
                b=ans(n/3);
                c=ans(n/4);
            }
            else{
                return n;
            }
            return a+b+c;
        }
        int maxSum(int n)
        {
            //code here.
            return ans(n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends