class Solution {
public:
    int climbStairs(int n) {
        int cnt = 1;
        for (int i = 1; i <= n / 2; i++) {
            double sum = 1;
            for (int j = i; j < 2 * i; j++) {
                sum *= (double)(n - j) / (j - i + 1);
            }
            cnt +=sum;
        }

        return cnt;
    }
};