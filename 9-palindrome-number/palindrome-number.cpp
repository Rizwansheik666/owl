class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            long long n=x,cnt=0;
            while(n){
                long long k=n%10;
                n/=10;
                cnt=(cnt*10)+k;
            }
            if(cnt==x) return true;
            else false;
        }
        return false;
    }
};