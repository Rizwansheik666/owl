class Solution {
  public:
    int numOfWays(int n, int m) {
        // code here
        int a=m*n, b=n+m;
        return a*(a-9)+12*b-16;
    }
};