//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    string s="";
	    for(int i=0;i<S.size();i++){
	        if(S[i]==ch and count!=0){
	            count--;
	        }
	        else if(S[i]!=ch and count!=0){
	            continue;
	        }
	        else{
	            s+=S[i];
	        }
	    }
	    if(s.empty())return "Empty string";
	    return s;
	}
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends