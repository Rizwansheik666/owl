//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int p=nums.size();
        vector<long long>ans(p,0);
        long long n=1;
        int flag=0;
        for(int i=0;i<p;i++){
            if(nums[i]!=0)n*=nums[i];
            else flag++;
        }
        if(flag>1){
            return ans;
        }
        for(int i=0;i<p;i++){
            if(flag==0){
                ans[i]=n/nums[i];
            }
            else{
                if(nums[i]!=0)ans[i]=0;
                else ans[i]=n;
            }
        }
        return ans;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends