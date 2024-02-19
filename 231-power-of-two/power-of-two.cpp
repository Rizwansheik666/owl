class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0 or (n&(n-1))!=0 ) return false;
        return true;
    }
};