class Solution {
public:
    int reverse(int x) {
        long long rev=0,s=0;
        if(x<0) s=-1;
        else s=1;
        x=abs(x);
        while (x != 0) {
            int d = x % 10;
            rev = rev * 10 + d;
            x /= 10;
        }
        rev*=s;
        if(rev>=(pow(2,31))-1 or rev<=pow(-2,31)) return 0;
        return rev;
    }
};