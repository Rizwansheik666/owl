#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k=n;
        while(n){
            k+=n/2;
            n=n/2;
        }
        cout<<k<<endl;
    }
}
